#include <stdio.h>

int main() {
  
  int x = 10;
  printf("The address of variable x: %p\n", &x);

  // Pointer assignment
  int *p = NULL;
  p = &x;
  printf("P pointer stores the address of variable x: %p\n", p);
  
  // Pointer copying
  int *q = p;
  printf("Pointer copying, this also stores the address of variable x: %p\n", q);

  // Accessing address of pointer itself.
  int **pp = &p;
  printf("Address of pointer p: %p\n", pp);

  printf("Address of variable x and Value of pointer p: %p\n", *pp);
  
  printf("Value stored at address of x: %d\n", **pp);

  return 0;
}
