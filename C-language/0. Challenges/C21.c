/*
Print all even numbers between 1 and 50
*/ 

#include <stdio.h>

int main() {
  
  for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0){
      printf("Even: %d\n", i);
    } else {
      continue;
    }
  }

  return 0;
}
