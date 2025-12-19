// BASICS OF C (printf, variables, data types, format specifiers
// arithemetic operators)

#include <stdio.h>
#include <stdbool.h>
// #include -> Preprocessor Directive
// <stdio.h> -> Standard Input Output Header
// C has no built in functions for printing or reading, Everything is external.
// printf, scanf, puts, gets -> all come from <stdio.h>
// Before the real compilation happens, C runs a tool called preprocessor.
// Preprocessor as a machine that prepares the code before real compilation happens.

/* So, #include <stdio.h> means, before compiling the code, go to the C standard library, find the file stdio.h
copy all it's function declarations (like printf, scanf) and paste them into my program so the compiler knows
they exists and how to use them.
*/

int main() {
  printf("This is my first ever C program\n");
  printf("Hello world!\n");

  // VARIABLES
  int age = 24;
  int years = 2001;
  printf("I am %d years old\n", age);
  printf("I was born in year %d\n", years);

  float gpa = 8.51;
  float temp = 5.345;
  float price = 19.99;

  printf("The gpa is %.2f\n", gpa);
  printf("Temperature is %.2f degree celsius\n", temp);
  printf("The price of the product is %f\n", price);

  double pi = 3.14159265359;
  printf("value of pi is %.7lf\n", pi);

  char grade = 'A';
  printf("You have got in your DSA exam %c\n", grade);

  /*
    char grade = "A"
    error -> incompatible pointer to integer conversion
            initializing 'char' with an expression of type 'char[2]'
    'A' = a single character (type: char)
    "A" = a string (type: char[2], an array of characters)

    'A' is stored as ASCII value 65
    "A" is stored as array {65, 0}

    C doesn't have string
    String = array of characters ending with \0
    \0 -> the null terminatior that marks the end of the string.

    let's say we define a string using.
    char name[] = "Ashish"
    it basically gets stored like :- {'A', 's', 'h', 'i', 's', 'h', '\0'}
    hence, Strings are just arrays of characters ending with a null character \0.

    Without this null character, C won’t know where the string stops and you’ll get 
    garbage output or memory errors.
  */

  char name[] = "Ashish";
  printf("My name is %s\n", name);

  /*
    What is a multi-character constant?
    'A' is technically an int, not a char — but it fits in a char.

    'AB'
    'XYZ'
    'Ash'
    These are called multi-character constants.

    They are not string, they are not arrays
    'Ashish' is not same as "Ashish".
    They get converted into a single integer value.
    By packing multiple bytes into int.

    How does 'ABCD' become an integer?
    'A' = 65
    'B' = 66
    'C' = 67
    'D' = 68

    C packs them like:
    'A' 'B' 'C' 'D'

    Which becomes
    0x41424344   (in hex)

    Decimal
    1094861636
    
    This is how we print the value:-

      int x = 'Ashish';
      printf("%d\n", x);
      printf("%x\n", x); 

    char name[] = 'Ashish';   // ❌ wrong
    // Because
      it becomes one integer
      the result is compiler-dependent
      it is NOT terminated with \0
      cannot be used as a string
      cannot be assigned to a char[]
  */
  
  // C does NOT initialize variables unless you do
  int y;  // contains garbage value
  printf("%d\n", y);

  /* Compilation is 2-step mentally
    You write .c → preprocessor → compiler → machine code.
    This mental model will matter A LOT when debugging.
  */

  bool isStudent = true;
  if (isStudent) {
    printf("You are a student");
  }
  else {
    printf("You're not a student");
  }
  printf("\n");

  // Width in format specifiers

  int a = 1;
  int b = 10;
  int c = 100;

  printf("%04d\n", a);
  printf("%04d\n", b);
  printf("%04d\n", c);

  // Basic arithemetic operators

  int z1 = 10;
  /* float z2 = 3; */
  int z2 = 3;
  //int z3 = 0;
  float z3 = 0;
  /* z3 = z1 + z2; */
  /* z3 = z1 - z2; */
  /* z3 = z1 * z2; */
  /* z3 = z1 / z2; */
  z3 = z1 % z2;
  // printf("%d\n", z3); // it will give 0 because w are using a integer format specifier and the result is a float.
  printf("%f", z3);


  return 0; // says: program ended successfully
}
