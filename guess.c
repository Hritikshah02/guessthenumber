#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, guess, attempts = 0;
    srand(time(0));  // Seed the random number generator with current time

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a number between 1 and 100. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts!\n", numberToGuess, attempts);
            break;
        }

    } while (1);

    return 0;
}
