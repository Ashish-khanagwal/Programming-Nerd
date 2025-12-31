#include <stdio.h>
#include <string.h>

typedef struct{
  char model[50];
  int year;
  int price;
}Car;

typedef struct{
  char name[100];
  int age;
}User;

void userDetails(User *user) {
  user->age = 25;
  strcpy(user->name, "Shruti");
}

int main() {
  
  Car cars[] = {{"Mustang", 2026, 30000},
                {"Bugati", 2027, 50000},
                {"Royals Royace", 2028, 70000}};

  int size = sizeof(cars) / sizeof(cars[0]);

  for (int i = 0; i < size; i++) {
    printf("%s, %d, $%d\n", cars[i].model, cars[i].year, cars[i].price);
  }

  // Passing Struct using pointers
  User user1 = {"Ashish", 24};
  User user2 = {"", 0};
  userDetails(&user2);
  printf("User age: %d\n", user2.age);
  printf("User name: %s\n", user2.name);

  return 0;
}
