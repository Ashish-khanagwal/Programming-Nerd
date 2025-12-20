/*
Write a void function that prints a greeting
*/ 

#include <stdio.h>
#include <string.h>

void greeting(char name[]){
  printf("Hello, %s", name);
}

int main() {
  char name[100] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  greeting(name);

  return 0;
}
