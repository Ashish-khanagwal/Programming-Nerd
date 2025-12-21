/*
What a while loop REALLY is
At its core, a while loop means:
“Keep executing this block as long as the condition is true.”

In C terms:
Condition is evaluated
If condition ≠ 0 → execute loop body
If condition == 0 → exit loop

Basic syntax:
while (condition) {
// code
}
*/ 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
How the CPU sees a while loop? 
This is important for real understanding.
Conceptually, this:

while (i < 5) {
    work();
}

Becomes something like:

check:
    if (i >= 5) jump to end
    work
    jump to check
end:

So a while loop is basically:
a conditional jump
plus an unconditional jump back

This is why infinite loops are easy to create 😄
*/ 

int main() {
  
  int i = 0;

  while (i < 5) {
    printf("%d\n", i);
    i++;
  }

  /*
    Break :- Exit loop immediately
  */ 
  int x = 0;
  while (1) {
    if (x == 5)
      break;
    printf("%d\n", x);
    x++;
  }

  /*
    Continue :- Skip rest of loop iteration
  */ 

  int a = 0;
  while (a < 5){
    a++;
    if (a == 3)
      continue;
    printf("%d\n", a);
  }

  char name[50] = "";
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  while (strlen(name) == 0) {
    printf("Name can not be empty, please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
  }

  printf("Hello, %s\n", name);

  /* int n; */
  /**/
  /* while (scanf("%d", &x) == 1) { */
  /*   printf("Read: %d\n", x); */
  /* } */

  bool isRunning = true;
  char response = '\0';

  while (isRunning){
    printf("You are playing a game!\n");
    printf("Want to continue? (Y = yes) and (N = no): ");
    scanf(" %c", &response);

    if (response != 'Y' && response != 'y'){
      printf("Exiting the game.\n");
      isRunning = false;
    }
  }

  return 0;
}
