#include <stdio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>

int main() {
  SSL_CTX *ctx = SSL_CTX_new(TLSv1_2_method());
  SSL *ssl = SSL_new(ctx);
  
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(443);
  server_addr.sin_addr.s_addr = inet_addr("172.217.12.174");
  
  connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr));
  SSL_set_fd(ssl, sock);
  SSL_connect(ssl);
  
  char request[] = "GET / HTTP/1.1\r\nHost: www.google.com\r\n\r\n";
  SSL_write(ssl, request, strlen(request));
  
  char response[4096];
  SSL_read(ssl, response, sizeof(response));
  printf("%s", response);
  
  SSL_shutdown(ssl);
  close(sock);
  return 0;
}
