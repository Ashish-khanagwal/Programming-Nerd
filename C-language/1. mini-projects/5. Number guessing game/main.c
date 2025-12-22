#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number_generator(int N) {
    int r;
    long long limit = ((long long)RAND_MAX + 1) / N * N;

    do {
        r = rand();
    } while (r >= limit);

    return r % N;
}

int user_guess() {
    int guess;
    printf("Guess the number: ");
    scanf("%d", &guess);
    return guess;
}

int main() {
    srand(time(NULL));

    printf("*** GUESS THE NUMBER GAME ***\n");

    int generated_num = random_number_generator(101);
    int tries = 5;
    int user_num;

    while (tries > 0) {

        user_num = user_guess(); 

        if (user_num == generated_num) {
            printf("Horrayy! Your guess is right.\n");
            break;
        } 
        else if (user_num < generated_num) {
            printf("Go higher!\n");
        } 
        else {
            printf("Go lower!\n");
        }

        tries--;

        if (tries > 0) {
            printf("Only %d chances are remaining, play carefully!\n", tries);
        }
    }

    if (tries == 0) {
        printf("Correct number is %d\n", generated_num);
        printf("You have used your chances, better luck next time!\n");
    }

    return 0;
}
