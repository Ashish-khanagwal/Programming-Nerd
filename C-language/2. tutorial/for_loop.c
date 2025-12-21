/*
What a for loop REALLY is

A for loop is not magic.
It is just a compact, readable form of a while loop.

Conceptually:

“Initialize → Check condition → Run body → Update → Repeat”

🔤 2. Basic syntax
for (initialization; condition; update) {
    // body
}
*/ 

#include <stdio.h>
#include <unistd.h>

int main() {
  
  for (int i = 0; i <= 5; i++) {
    printf("%d\n", i);
  }

  for (int i = 10; i >= 0; i--){
    /* sleep(1); */
    printf("%d\n", i);
  }
  printf("Happy new year!\n");


  // Nested Loops
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("i = %d, j = %d\n", i, j);
    }
  }


  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++) {
      if (j == 1)
        break;
      printf("i = %d, j = %d\n", i, j);
    }
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++) {
      if (j == 1)
        continue;
      printf("i = %d, j = %d\n", i, j);
    }
  }

  printf("\nbreaking out of multiple loops\n");
  // Breakig out of multiple loops
  int found = 0;

  for (int i = 0; i < 3 && !found; i++){
    for (int j = 1; j < 3; j++) {
      if (i == j) {
        found = 1;
        break;
      }
      printf("i = %d, j = %d\n", i, j);
    }
  }
  
  printf("\n goto \n");
  for (int i = 0; i < 3; i++){
    for (int j = 1; j < 3; j++) {
      if (i == j)
        goto done;
      printf("i = %d, j = %d\n", i, j);
    }
  }
  done:
  printf("Exited both loops\n");


  

  return 0;
}
