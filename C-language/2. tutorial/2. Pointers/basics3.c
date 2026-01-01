#include <stdio.h>

void increment(int *p){
  *p = *p + 1;
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {

  int a = 10, b = 5;
  increment(&a);
  printf("%d\n", a);
  
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
