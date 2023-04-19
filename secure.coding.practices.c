#include <stdio.h>
#include <string.h>

int main() {
  char password[16];
  printf("Enter password: ");
  scanf("%s", password);
  
  if (strcmp(password, "securepassword") == 0) {
    printf("Access granted\n");
  } else {
    printf("Access denied\n");
  }
  
  return 0;
}
