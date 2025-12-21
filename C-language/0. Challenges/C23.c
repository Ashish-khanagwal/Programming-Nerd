/*
Use do–while to repeatedly ask for a password until correct.
*/ 

#include <stdio.h>
#include <string.h>

int main() {
  
  int password = 1234;

  do {
    printf("Enter your password: ");
    scanf("%d", &password);

    if (password != 1234) {
      printf("Wrong password, try again!\n");
      continue;
    } else {
      printf("Correct password, Bye");
    }
  } while(password != 1234);

  return 0;
}
