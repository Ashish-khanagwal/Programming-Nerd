#include <stdio.h>
#include <string.h>

int main() {
  char item[100] = "";
  float price = 0.0f;
  int quantity = 0;
  float total = 0.0f;
  
  printf("What item would you like to buy? ");
  fgets(item, sizeof(item), stdin);
  item[strcspn(item, "\n")] = '\0';

  printf("What is the price for each? ");
  scanf("%f", &price);

  printf("How many would you like? ");
  scanf("%d", &quantity);

  total = price * quantity;

  printf("You have bought %d %s/s\n", quantity, item);

  printf("The total is: $%.2f", total);

  return 0;
}
