/*
Print a multiplication table (1–10) using nested loops.
*/

#include <stdio.h>

int main() {
  
  for (int i = 1; i <= 10; i++){
    for (int j = 1; j <= 10; j++) {
      int m = i * j;
      printf("%3d", m);
    }
    printf("\n");
  }

  return 0;
}
