/*
Think of switch as:

“Jump directly to the matching label instead of checking conditions one by one.”
Unlike if–else, which evaluates conditions,
switch works on exact values.
Internally, compilers often turn switch into:
a jump table (very fast)
or a binary decision tree
That’s why kernels, drivers, and interpreters love switch.

switch (expression) {
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
*/ 

#include <stdio.h>

int main() {
  
  int day = 3;

  switch (day) {
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    default:
      printf("Invalid days\n");
  }

  /*
   * If you don’t write break, execution continues into the next case.
   * int x = 1;

  switch (x) {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
}
    One
    Two
    Three

    Because:

    case labels are just labels
    switch jumps to the matching label
    then keeps executing until it hits a break or ends

    break means -> Exit the switch block now

    Without break, C assumes you want fallthrough.
    C never assume - you decide.
  */ 

  // Fallthrough is not a bug, it's a feature.
  char grade = 'A';
  switch (grade) {
    case 'A':
    case 'B':
    case 'C':
      printf("Pass\n");
      break;
    case 'D':
    case 'F':
      printf("Fail\n");
      break;
  }
  /*
  Default runs if no cases matches.

  Valid types switch can use:
  int, char, enum

  Invalid:
  float, double, string, struct

  why? Because switch needs faster integer comparison.
  */
  return 0;
}
