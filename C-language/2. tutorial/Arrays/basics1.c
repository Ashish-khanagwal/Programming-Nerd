#include <stdio.h>

void f(int arr) {
  /* printf("%lu\n", sizeof(arr)); */
  // size of pointer
}

int main() {
  
  // Full Initialization
  int arr[5] = {1, 2, 3, 4, 5};

  printf("%d\n", arr[0]);

  // Partial Initialization
  int arr1[5] = {1, 2};
  // {1, 2, 0, 0, 0}

  // Missing elements are zero filled
  // This is guaranted by C standard

  // Automatic size inference
  int arr2[] = {1, 2, 3};
  // compiler counts:
  // size = 3
  // very common and safe
  
  // Zero Initialization shortcut:
  int arr3[5] = {0};
  // Result:
  // {0, 0, 0, 0, 0}
  
  printf("%lu\n", sizeof(arr)); // 20 bytes
  // number of elements * size of data type

  int len = sizeof(arr) / sizeof(arr[0]);
  // length of array
  printf("%d\n", len); 

  // Valid only in same scope

  for (int i = 0; i < len; i++) {
    printf("%d: %d\n", i, arr[i]);
  }

  char name[6] = {'A', 'S', 'H', 'I', 'S', 'H'};
  int len_c = sizeof(name) / sizeof(name[0]);
  
  printf("\n%d\n", len_c);
  for (int i = 0; i < len_c; i++) {
    printf("\n%d: %c\n", i, name[i]);
  }

  char fname[] = "Ashish";
  int len_s = sizeof(fname) / sizeof(fname[0]);

  printf("%d\n", len_s);
  for (int i = 0; i < len_s; i++){
    printf("\n%d: %c\n", i, fname[i]);
  }

  int arr4[5];
  printf("\n%d\n", arr4[0]);
  return 0;
}
