#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();
void checkWinner(int userChoice, int computerChoice);

int main() { 

  printf("=== ROCK PAPER SCISSOR ===\n");
  
  printf("1 FOR ROCK\n");
  printf("2 FOR PAPER\n");
  printf("3 FOR SCISSOR\n");


  srand(time(NULL));
  int computerChoice = getComputerChoice(); 

  int userChoice = getUserChoice();
  switch (userChoice) {
    case 1:
      printf("Your choice is ROCK\n");
      break;
    case 2:
      printf("Your choice is PAPER\n");
      break;
    case 3:
      printf("Your choice is SCISSOR\n");
      break;
  }

  switch (computerChoice) {
    case 1:
      printf("Computer's choice is ROCK\n");
      break;
    case 2:
      printf("Computer's choice is PAPER\n");
      break;
    case 3:
      printf("Computer's choice is SCISSOR\n");
      break;
  }

  checkWinner(userChoice, computerChoice);

  return 0;
}

int getUserChoice() {

  int choice = 0;
  
  do {
    printf("Enter your choice\n");
    scanf("%d", &choice);
  } while (choice < 1 || choice > 3);
  
  return choice;
}

int getComputerChoice() {

  return (rand() % 3) + 1;
}

void checkWinner(int userChoice, int computerChoice) {
  if (userChoice == computerChoice) {
    printf("It's a tie\n");
  } else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
    printf("You win!\n");
  } else {
    printf("You lose!\n");
  }
}
