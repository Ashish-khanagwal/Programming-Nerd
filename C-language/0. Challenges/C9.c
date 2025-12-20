/*
Simulate login:
username = "admin"
password = 1234
print access granted / denied
*/ 

#include <stdio.h>
#include <string.h>

int main() {
  
  char username[10] = "";
  int password = 0;

  printf("Enter username: ");
  fgets(username, sizeof(username), stdin);
  username[strcspn(username, "\n")] = '\0';

  printf("Enter password: ");
  scanf("%d", &password);

  if (strcmp(username, "admin") == 0 && password == 1234) {
    printf("Access Granted");
  } else {
    printf("Access Denied");
  }

  return 0;
}
