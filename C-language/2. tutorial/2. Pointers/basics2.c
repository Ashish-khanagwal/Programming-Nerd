#include <stdio.h>

int main() {
  
  int arr[5] = {10, 20, 30, 40, 50};

  int * pa = arr;
  int * enda = arr + 5;

  for (int i = 0; i < 5; i++){
    printf("%d\n", *(pa + i));
  }

  while (pa < enda) {
    printf("%d\n", *pa);
    pa++;
  }
  /*
   * pa starts at first element
   * pa++ jumps element by element
   * No indexing needed
  */

  return 0;
}
