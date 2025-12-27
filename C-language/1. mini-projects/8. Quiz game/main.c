#include <stdio.h>
#include <stdbool.h>

bool isPlaying(){
  char exit = '\0';
  bool isExit = false;

  printf("Want to exit? \n(X or x) to Exit\n(n or N) for no!\n");
  scanf(" %c", &exit);

  if (exit == 'X' || exit == 'x') {
    return isExit = true;
  } else {
    return isExit = false;
  }
}

int main() {
  
  printf("** QUIZ GAME **\n");
  char ans = '\0';
  bool isExit = false;
  int max_points = 5;
  int points = 0;
  int q = 5;

  while (q != 0 && !isExit) {

    printf("\nWhich planet is known as the Red Planet?\nA) Earth\nB) Venus\nC) Mars\nD) Jupiter\n");
    printf("\nEnter your choice\n");
    scanf(" %c", &ans);
    
    if (ans == 'c' || ans == 'C') {
      printf("\nCorrect!\n");
      points += 1;
      q -= 1;
    } else {
      printf("\nWrong!!\n");
      q -= 1;
      isExit = isPlaying();
      if (isExit) break;
    }

    printf("\nWhich planet is the largest in our solar system?\nA) Saturn\nB) Jupiter\nC) Uranus\nD) Neptune\n");
    printf("\nEnter your choice\n");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B') {
      printf("\nCorrect!\n");
      points += 1;
      q -= 1;
    } else {
      printf("\nWrong!!\n");
      q -= 1;
      isExit = isPlaying();
      if (isExit) break;
    }
    
    printf("\nWhat is the name of the star at the center of our solar system?\nA) Sirius\nB) Alpha Centauri\nC) Polaris\nD) Sun\n");
    printf("\nEnter your choice\n");
    scanf(" %c", &ans);

    if (ans == 'd' || ans == 'D') {
      printf("\nCorrect!\n");
      points += 1;
      q -= 1;
    } else {
      printf("\nWrong!!\n");
      q -= 1;
      isExit = isPlaying();
      if (isExit) break;
    }

    printf("\nWhich planet has the most prominent ring system?\nA) Jupiter\nB) Mars\nC) Saturn\nD) Neptune\n");
    printf("\nEnter your choice\n");
    scanf(" %c", &ans);

    if (ans == 'c' || ans == 'C') {
      printf("\nCorrect!\n");
      points += 1;
      q -= 1;
    } else {
      printf("\nWrong!!\n");
      q -= 1;
      isExit = isPlaying();
      if (isExit) break;
    }

    printf("\nWhich planet is closest to the Sun?\nA) Venus\nB) Earth\nC) Mercury\nD) Mars\n");
    printf("\nEnter your choice\n");
    scanf(" %c", &ans);

    if (ans == 'c' || ans == 'C') {
      printf("\nCorrect!\n");
      points += 1;
      q -= 1;
    } else {
      printf("\nWrong!!\n");
      q -= 1;
      isExit = isPlaying();
      if (isExit) break;
    } 
  }

  printf("You scored %d points out of %d\n", points, max_points);

  return 0;
}
