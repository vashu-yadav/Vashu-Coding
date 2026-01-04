#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, attempts = 0;
    srand(time(NULL));
    num = rand() % 100 + 1;
    printf("Guess a number 1-100 (10 tries max):\n");
    do {
        scanf("%d", &guess);
        attempts++;
        if (guess > num) printf("Too high!\n");
        else if (guess < num) printf("Too low!\n");
        else printf("Correct! %d tries.\n", attempts);
    } while (guess != num && attempts < 10);
    if (attempts >= 10) printf("Game over! It was %d\n", num);
    return 0;
}
