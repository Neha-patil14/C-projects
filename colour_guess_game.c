#include <stdio.h>
#include <stdlib.h>

int main() {
    int correctcolor, guess, attempts = 0;
   
    srand(123);


    correctcolor = rand() % 3 + 1;

    printf("Welcome to the Color Match Game\n");
    printf("Try to guess the correct color.\n");
    printf("For red it is 1, Blue by 2, and for green is 3.\n\n");

 
    do {
        printf("Enter your guess (1 for Red, 2 for Blue, 3 for Green): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < 1 || guess > 3) {
            printf("Invalid input Please enter a number between 1 and 3.\n");
            continue;
        }

        if (guess == correctcolor) {
            printf("Congratulations You guessed the correct color in %d attempts!\n", attempts);
        } else {
            printf("Incorrect! Try again.\n");
        }
    } while (guess != correctcolor);

    return 0;
}