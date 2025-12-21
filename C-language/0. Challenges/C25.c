#include <stdio.h>
#include <string.h>

int main() {
  int rows = 0;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  int columns = 0;
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  char symbol = '\0';
  printf("Enter the symbol you want to use: ");
  scanf(" %c", &symbol);

  for (int i = 1; i <= rows; i++){
    for (int j = 1; j <= columns; j++){
      printf("%c", symbol);
    }
    printf("\n");
  }
}
