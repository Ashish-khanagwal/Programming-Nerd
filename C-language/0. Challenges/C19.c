/*
Read integers until user enters 0.
*/ 

#include <stdio.h>

int main() {
  
  int n;

  while (scanf("%d", &n) != 0) {
    if (n == 0)
      break;
    printf("Read: %d\n", n);
  }

  return 0;
}
