#include <stdio.h>
#include <ctype.h>

int main() {

  printf("** QUIZ GAME **\n");
  int points = 0;
  char choice = '\0';

  char question[][100] = {"\nWhich planet is known as the Red Planet?",
                        "\nWhich planet is the largest in our solar system?",
                        "\nWhat is the name of the star at the center of our solar system?",
                        "\nWhich planet has the most prominent ring system?",
                        "\nWhich planet is closest to the Sun?"};

  char options[][100] = {"A) Earth\nB) Venus\nC) Mars\nD) Jupiter",
                          "A) Saturn\nB) Jupiter\nC) Uranus\nD) Neptune",
                          "A) Sirius\nB) Alpha Centauri\nC) Polaris\nD) Sun",
                          "A) Jupiter\nB) Mars\nC) Saturn\nD) Neptune",
                          "A) Venus\nB) Earth\nC) Mercury\nD) Mars"}; 

  char answerKey[] = {'C', 'B', 'D', 'C', 'C'};

  int len_q = sizeof(question) / sizeof(question[0]);
  
  for (int i = 0; i < len_q; i++) {
    printf("%s\n", question[i]); 
    printf("\n%s\n", options[i]);
    printf("\nEnter your choice: ");
    scanf(" %c", &choice);

    choice = toupper(choice);

    if (choice == answerKey[i]) {
      points++;
      printf("\nCorrect!\n");
    } else {
      printf("\nWrong!\n");
    }
  }

  printf("You scored %d out of %d\n", points, len_q);

  return 0;
}
