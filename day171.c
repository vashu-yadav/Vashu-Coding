#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r;
    char q;
    srand(time(NULL));
    printf("Ask a yes/no question (y/n to quit): ");
    while (scanf(" %c", &q) == 1 && q != 'n') {
        r = rand() % 8;
        if (r == 0) printf("Yes!\n");
        else if (r == 1) printf("No.\n");
        else if (r == 2) printf("Maybe.\n");
        else if (r == 3) printf("Ask again.\n");
        else if (r == 4) printf("Unlikely.\n");
        else if (r == 5) printf("Very likely.\n");
        else if (r == 6) printf("Don't count on it.\n");
        else printf("Outlook good.\n");
        printf("Ask another (y/n)? ");
    }
    return 0;
}
