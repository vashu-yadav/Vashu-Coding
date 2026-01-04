#include<stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 0;
    srand(time(NULL));
    secret = rand() % 100 + 1;   // 1–100

    printf("Guess the number (1-100):\n");
    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Correct in %d tries!\n", tries);
    } while (guess != secret);

    return 0;
}