#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, comp, rounds = 0;
    srand(time(NULL));
    printf("Rock(1), Paper(2), Scissors(3). Play 5 rounds!\n");
    for (int i = 0; i < 5; i++) {
        printf("Your choice: ");
        scanf("%d", &user);
        comp = rand() % 3 + 1;
        printf("Computer: %d\n", comp);
        if (user == comp) printf("Tie!\n");
        else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
            printf("You win!\n"), rounds++;
        else printf("Computer wins!\n");
    }
    printf("Your wins: %d/5\n", rounds);
    return 0;
}
