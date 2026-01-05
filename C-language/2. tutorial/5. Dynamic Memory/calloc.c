#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int number = 0;
  printf("Enter number: ");
  scanf("%d", &number);

  int *series = calloc(number, sizeof(int));
  
  if (series == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  for (int i = 0; i < number; i++) {
    printf("Enter %d in series: ", i+1);
    scanf("%d", &series[i]);
  }

  for (int i = 0; i < number; i++) {
    printf("%d ", series[i]);
  }

  free(series);
  series = NULL;

  return 0;
}
