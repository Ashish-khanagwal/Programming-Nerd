#include <stdio.h>

typedef struct{
  char name[100];
  int age;
}Student;

int main() {
  
  Student s1 = {"Ashish", 24};
  Student *s = &s1;
  s->age = 25;
  printf("Name: %s, Age: %d\n", (*s).name, (*s).age);
  printf("Name: %s, Age: %d\n", s->name, s->age);

  // Array of structs
  Student st[] = {{"Shruti", 24},
                 {"Nitya", 4},
                {"Niyati", 2}};

  Student *sAS = st;
  int len = sizeof(st) / sizeof(st[0]);
  for (int i = 0; i < len; i++) {
    printf("Name: %s, Age: %d\n", sAS->name, sAS->age);
    sAS++;
    // sAS++ jumps by sizeof(struct Student), not 1 byte
  }

  return 0;
}
