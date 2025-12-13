#include<stdio.h>


int main() {
    FILE *fp;
    int x = 10, y;

    fp = fopen("gate.txt", "w+");

    fprintf(fp, "%d", x);

    rewind(fp);

    fscanf(fp, "%d", &y);

    printf("%d", y);

    fclose(fp);
    return 0;
}