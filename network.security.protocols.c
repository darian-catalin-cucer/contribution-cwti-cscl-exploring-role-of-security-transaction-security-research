#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
  int sock = socket(AF_INET, SOCK_STREAM, 0);
  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(80);
  server_addr.sin_addr.s_addr = inet_addr("8.8.8.8");
  
  int status = connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (status == 0) {
    printf("Connected to server\n");
  } else {
    printf("Connection failed\n");
  }
  
  close(sock);
  return 0;
}
