#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess, attempts = 0;
    const int MAX_NUMBER = 100;

    srand(time(NULL));

    numberToGuess = rand() % MAX_NUMBER + 1;

    printf("Welcome to the Guessing Game!\n");
    printf("Here, I have selected a random number between 1 and %d. Try to guess it!\n", MAX_NUMBER);

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        attempts++;

        if (userGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (userGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (userGuess != numberToGuess);

    return 0;
}
