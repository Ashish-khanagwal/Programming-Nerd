#include <stdio.h>
#include <stdbool.h>

typedef struct {
  char name[50];
  int age;
  bool isWorking;
  bool isStudying;
}Family;

// Passing Struct into a function
void printDetails(Family member);

int main() {
  
  Family member1 = {"Ashish", 25, true, false};
  Family member2 = {"Shruti", 24, true, false};
  Family member3 = {"Nitya", 4, false, true};
  Family member4 = {"Niyait", 2, false, true};

  printDetails(member1);
  printDetails(member2);
  printDetails(member3);
  printDetails(member4);

  return 0;
}

void printDetails(Family member) {
  printf("Name: %s\n", member.name);
  printf("Age: %d\n", member.age);
  printf("Working: %s\n", (member.isWorking) ? "Yes" : "No");
  printf("Studying: %s\n\n", (member.isStudying) ? "Yes" : "No");
}
