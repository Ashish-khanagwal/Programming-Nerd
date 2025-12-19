// Ask user for their name, and age, and print a certain output.
#include <stdio.h>
#include <string.h>

int main() {
  char name[100] = "";
  int age = 0;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Hello %s, you are %d years old.", name, age);

  return 0;
}
