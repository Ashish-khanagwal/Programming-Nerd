#include <stdio.h>
#include <math.h>

int main() {
  double radius = 0.0;
  double area = 0.0;
  double surfaceArea = 0.0;
  double volume = 0.0;
  const double pi = 3.14159;

  printf("Enter the radius: ");
  scanf("%lf", &radius);

  area = pi * pow(radius, 2);
  printf("Area %.2f\n", area);

  surfaceArea = 4 * pi * pow(radius, 2);
  printf("Surface Area %.2f\n", surfaceArea);

  volume = (4.0 / 3.0) * pi * pow(radius, 3);
  printf("Volume %.2f\n", volume);

  return 0;
}
