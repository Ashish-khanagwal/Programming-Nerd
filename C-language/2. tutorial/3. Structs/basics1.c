#include <stdio.h>

// Blueprint of struct
struct Student {
  int id;
  char grade;
};

int main() {

  // Struct Initialization
  // Method - 1 Field by field
  // Declaring struct variables
  struct Student s1;

  // Accessing struct memebers (. operator)
  s1.id = 32;
  s1.grade = 'A';

  // Method - 2 Aggregate Initialization
  struct Student s2 = {101, 'B'};

  // Method - 3 Partial Initialization
  struct Student s3 = {102};
  // id = 102
  // grade = '\0'

  printf("%zu\n", sizeof(struct Student));
  
  int s = sizeof(void*);
  printf("%d\n", s);
  // Above code tells you the pointer size 
  // mine is 8 bytes so that mean my system in 64 bit
  // if it were 4 bytes then my system would have been 32 bit
    
  return 0;
}
