/*
A named block of code that lives somewhere in memory and can be
jumped to, executed, and returned from.

When we call a function:
CPU jumps to that memory location 
executes instrucions
returns back with a value (or not)

This is controlled jumping not magic.

return_type function_name(parameter_list) {
  // function body
  return value; // optional if return_type is void
}
*/ 

/*
C needs to know about functions before they are used.

C is a single pass comiler historically.

if we write:-

int main() {
    add(2, 3);   // ❌ compiler doesn’t know add yet
}

int add(int a, int b) {
    return a + b;
}
This will cause an error until we declare add function first.
*/ 

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {
  printf("Hello %s\n", name);
}

int main() {

  /*
  main is not special in syntax
  It is special only because the OS calls it.
  Everything we learn about functions applies to main.
  */ 
  
  int result = add(3, 4);
  printf("Result: %d\n", result);

  greet("Ashish");

  return 0;
}
