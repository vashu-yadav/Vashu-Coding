#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, attempts = 0;

    srand(time(NULL));              // seed random
    secret = rand() % 100 + 1;      // 1–100

    printf("Guess the number (1-100):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Correct! You guessed it in %d attempts.\n", attempts);
    } while (guess != secret);

    return 0;
}
