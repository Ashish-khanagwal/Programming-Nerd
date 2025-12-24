#include <stdio.h>
#include <string.h>

int main() {

  // Taking user input into intger arrays

  int arr[5];
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++) {
    printf("Enter a number: ");
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < len; i++) {
    printf("%d : %d\n", i, arr[i]);
  }

  char name[6];

  getchar();
  printf("Enter characters of your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  for (int i = 0; name[i] != '\0'; i++) {
    printf("%d: %c\n", i, name[i]);
  }

  int len_s = sizeof(name) / sizeof(name[0]);

  for (int i = 0; i < len_s; i++) {
    printf("%d: %c\n", i, name[i]);
  }


  // Taking arrays size from the user
  // Dynamic length (but static array)
  int n;
  getchar();
  printf("Enter size of array you want: ");
  scanf("%d", &n);
  if (n > 100) n = 100;
  int num[100] = {0};

  for (int i = 0; i < n; i++){
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < n; i++){
    printf("%d: %d\n", i, num[i]);
  }

  return 0;
}
