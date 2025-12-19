// Basics of C part-2 (scanf, fgets)

/*
C does NOT have built-in input functions.
So we use functions provided by the Standard Library (stdio.h).

For reading input, we commonly use:

scanf → reads formatted input
fgets → reads a full line (safe)
getchar → reads one character
*/ 

// scanf stands for: Scan Formatted Input

#include <stdio.h>
#include <string.h>

int main() {
  int age = 0;
  float gpa = 0;
  char grade = '\0';
  char name[100] = "";

  printf("Enter your age: ");
  scanf("%d", &age);
  // You MUST write &age.
  // Because:
  // scanf needs the address of the variable
  // so it can write the input value directly into memory
  // & = “get the memory address of”
  // scanf reads formatted tokens, not lines. It skips whitespace for most specifiers but not for %c
  // fgets reads whole lines (including the trailing \n) and is the safe choice for strings
  
  printf("Enter your gpa on the scale of 1-5: ");
  scanf("%f", &gpa);

  printf("Enter your grade: ");
  scanf(" %c", &grade);
  // Notice the space before %c
  // That space tells scanf:
  // Ignore whitespace and newline before reading character
  // Without the space, it might end up reading '\n'

  getchar(); // new line character
  /* printf("Enter your name: "); */
  // scanf("%s", &name); // It skips the last name as it found out a space just before the last name.
  /* fgets(name, sizeof(name), stdin); */
  /* name[strlen(name) - 1] = '\0'; */

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';
  /*
  We used above line because, when we enter the string and press 'enter', it counts this enter as '/n'
  new line character and creates a new line, so to remove that we used this line.
  */

  printf("full name: %s\n", name);
  printf("age: %d\n", age);
  printf("gpa: %.2f\n", gpa);
  printf("grade: %c\n", grade);

  return 0;
}
