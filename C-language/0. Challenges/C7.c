/*
Check if a year is a leap year.

Rules:

divisible by 4 → leap
divisible by 100 → not leap
divisible by 400 → leap
*/

#include <stdio.h>

int main() {

  int year = 0;
  printf("Enter any year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 != 0) {
      printf("Leap year\n");
    } else if (year % 400 == 0) {
      printf("Leap year\n");
    } else {
      printf("Not a leap year\n");
    } 
  } else {
    printf("Not a leap year\n");
  }


  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
    printf("Leap year\n");
  } else {
    printf("Not a leap year\n");
  }

  return 0;
}
