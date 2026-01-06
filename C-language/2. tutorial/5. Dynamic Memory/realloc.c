#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int number = 0;
  printf("Enter number of prices: ");
  scanf("%d", &number);

  float *prices = calloc(number, sizeof(float));
  
  if (prices == NULL) {
    printf("Memory not allocated\n");
    return 1;
  }

  for (int i = 0; i < number; i++) {
      printf("Enter prices %d: ", i + 1);
      scanf("%f", &prices[i]);
  }

  int newNumber = 0;
  printf("Enter new number of prices: ");
  scanf("%d", &newNumber);

  float *temp = realloc(prices, newNumber * sizeof(float));
  /*
    “Take the memory block pointed to by ptr,
    resize it to new_size bytes,
    and keep the existing data intact.”
  */
  if (temp == NULL) { 
    printf("New memory not allocated\n");
  } else {
    prices = temp;
    temp = NULL;
    
    for (int i = number; i < newNumber; i++) {
      printf("Enter prices %d: ", i + 1);
      scanf("%f", &prices[i]);
    }
    
    for (int i = 0; i < newNumber; i++) {
      printf("$%.2f ", prices[i]);
    } 
  }

  free(prices);
  prices = NULL;

  return 0;
}
