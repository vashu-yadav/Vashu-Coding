
#include <stdio.h>

int main() {
    int percent;
    scanf("%d", &percent);

    if (percent >= 90 && percent <= 100)
        printf("Grade A\n");
    else if (percent >= 80 && percent < 90)
        printf("Grade B\n");
    else if (percent >= 70 && percent < 80)
        printf("Grade C\n");
    else if (percent >= 60 && percent < 70)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}
