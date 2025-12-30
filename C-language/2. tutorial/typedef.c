#include <stdio.h>

typedef int myint;
typedef char String[50];
typedef char Initials[3];
typedef int (*operation)(int, int);

int add(int a, int b) {
  return a + b;
}

/* Basic typedes syntax
 * typedef <existing_type> <alias name>;
*/

int main() {

  // typedef doesn't create new type, it creates an alias for an existing type.
  myint a = 10;
  printf("%d\n", a);

  String name = "Ashish";
  printf("%s\n", name);

  Initials user1 = "AK";
  Initials user2 = "SK";
  Initials user3 = "NK";
  Initials user4 = "NK";

  printf("%s\n", user1);
  printf("%s\n", user2);
  printf("%s\n", user3);
  printf("%s\n", user4);
  
  operation op;
  myint addition;

  op = add;
  addition = op(2, 3);
  printf("%d\n", addition);

  return 0;
}
