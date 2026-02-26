#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() {
    int secret_number, guess;
    int turns = 5;
    int turn = 0;
    printf("name=harmanjot singh\n");
    printf("rollno=2410997135\n");

    // Seed the random number generator
    srand(time(0));
    secret_number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have %d turns to guess the number between 1 and 100.\n", turns);

    // Use a while loop to manage turns
    while (turn < turns) {
        printf("Turn %d: Enter your guess: ", turn + 1);
        scanf("%d", &guess);
        turn++;

        if (guess < secret_number) {
            printf("Your guess is too low.\n");
        } else if (guess > secret_number) {
            printf("Your guess is too high.\n");
        } else {
            printf("Congratulations! You've guessed the number %d correctly in %d turns!\n", secret_number, turn);
            return;  // Player wins, exit the function
        }
    }

    printf("Sorry, you've used all your turns. The secret number was %d.\n", secret_number);
}

int main() {
    number_guessing_game();
    return 0;
}

