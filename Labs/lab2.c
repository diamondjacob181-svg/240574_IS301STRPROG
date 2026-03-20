/*
Name: George Jacob
ID: 240574
Date: 3/22/2025

Algorithm (Summary):
1. Generate a random number between 1 and 20.
2. Ask user to guess the number (maximum 5 tries).
3. After each guess:
   - If correct → print success message and stop.
   - If too low → display hint.
   - If too high → display hint.
4. If user fails after 5 tries → display correct number and failure message.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getGuess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}  
void printSuccess() {
    printf("Congratulations! You did it.\n");
}
void printFailure(int number) {
    printf("Sorry. The number was %d.\n", number);
    printf("You should have gotten it by now.\n");
    printf("Better luck next time.\n");
}
int main() {
    int randomNumber, guess, i;

    srand (time(NULL));
    randomNumber = (rand() % 20) + 1;

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    for(i = 1; i <= 5; i++) {
        guess = getGuess();

        if(guess == randomNumber) {
            printSuccess();
            return 0;
        }
        else if(guess < randomNumber) {
            printf("Your guess is low. Try again:\n");
        }
        else {
            printf("Your guess is high. Try again:\n");
        }
    }

    printFailure(randomNumber);
    return 0;
}

