#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
  
  int x = 11;

  if (x > 10) {
    printf("x is big\n");
  } else {
    printf("x is small\n");
  }

  /*
   C does not have a real boolean type historically.
   it treats:-
   0 as false
   anything else as true
   even -99, 42 -> true
  */ 

  int age = 0;
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age > 18 && age < 60) {
    printf("Working age\n");
  } else {
    printf("Can't work\n");
  }
  
  /*
  C evaluates logical expressions left to right and stops early if possible.
   if (age > 18 && age < 60) {
    // pass
   }

   if age < 18, C never evaluates age < 60
  */ 

  /*
  if (x) {

  } Means if x is not zero (false)

  if (1) -> True
  if (-5) -> True 
  if (1000) -> True 
  if (0) -> False 
  */ 
  
  if (age > 18 && age < 60) {
    printf("Working age\n");
  } else if (age == 18) {
    printf("Need parents permission\n");
  } else {
    printf("Can't work\n");
  }


  if (age >= 18 && age <= 60) {
    if (age == 18){
      printf("Need parents persmission\n");
    } else if (age == 60) {
      printf("Need to show medical certificate\n");
    } else {
      printf("You can work\n");
    }
  } else {
    printf("Sorry, you can't work\n");
  }

  // TERNARY OPERATOR (?:)
  int a = 10;
  int b = 5;
  int max = (a > b) ? a : b;
  printf("Max: %d \n", max);
  // Used heavily in kernals and embedded code.

  getchar(); 
  char name[100] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  if (strlen(name) == 0){
    printf("You have not entered anything\n");
  } else {
    printf("Hello, %s", name);
  }

  return 0;
}
