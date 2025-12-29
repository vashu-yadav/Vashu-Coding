#include <stdio.h>

int main(void) {
    int score = 50;
    int bonus = 7;

    printf("Initial score = %d\n", score);

    score = score + bonus;      // arithmetic +
    printf("After bonus (+): %d\n", score);

    score -= 5;                 // assignment -=
    printf("After penalty (-= 5): %d\n", score);

    score *= 2;                 // assignment *=
    printf("After x2 (*= 2): %d\n", score);

    score++;                    // increment
    printf("After level-up (++): %d\n", score);

    return 0;
}
