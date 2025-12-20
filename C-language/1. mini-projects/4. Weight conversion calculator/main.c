#include <stdio.h>
#include <math.h>

int main() {
  printf("Weight Conversion Calcualtor\n1. Kilograms to Pounds\n2. Pounds to Kilograms\n");

  int choice = 0;
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  double weight = 0.0;
  double convertedWeight = 0.0;
  
  if (choice == 1) {
    printf("Enter the weight in Kilograms: ");
    scanf("%lf", &weight);
    convertedWeight = weight * 2.20462;
    printf("%.2lf Kilograms is equal to %.2lf pounds\n", weight, convertedWeight);
  } else if (choice == 2) {
    printf("Enter the weight in Pounds: ");
    scanf("%lf", &weight);
    convertedWeight = weight / 2.20462;
    printf("%.2lf Pounds is equal to %.2lf kilograms\n", weight, convertedWeight);
  } else {
    printf("Wrong choice\n");
  }

  return 0;
}
