/*
Input a month number and print the season using fallthrough.
*/ 

#include <stdio.h>

int main() {
    
  int n = 0;
  printf("Enter the month number: ");
  scanf("%d", &n);

  switch (n) {
    case 12:
    case 1:
    case 2:
      printf("Winter\n");
      break;
    case 3:
    case 4:
    case 5:
      printf("Spring\n");
      break;
    case 6:
    case 7:
    case 8:
      printf("Summer\n");
      break;
    case 9:
    case 10:
    case 11:
      printf("Autumn\n");
      break;
    default:
      printf("Invalid month number.\n");
  }

  return 0;
}
