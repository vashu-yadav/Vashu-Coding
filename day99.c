
#include <stdio.h>

int main(void)
{
    FILE *fp;
    int x;
    long long sum = 0;
    int count = 0;
    double avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &x) == 1) {   // reads space-separated ints [web:8][web:9]
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found.\n");
    } else {
        avg = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
