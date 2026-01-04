#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char you, comp;
    int n;
    srand(time(NULL));
    n = rand() % 100;
    if (n < 33) comp = 'r';
    else if (n < 66) comp = 'p';
    else comp = 's';
    printf("r=rock, p=paper, s=scissors: ");
    scanf(" %c", &you);
    if (you == comp) printf("Draw!\n");
    else if ((you == 'r' && comp == 's') || (you == 's' && comp == 'p') || (you == 'p' && comp == 'r'))
        printf("You win! Comp: %c\n", comp);
    else printf("You lose! Comp: %c\n", comp);
    return 0;
}
