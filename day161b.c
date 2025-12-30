#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    fp = fopen("data.txt", "w");
    fprintf(fp, "100 200 300");
    fclose(fp);

    fp = fopen("data.txt", "r");
    while (fscanf(fp, "%d", &n) != EOF)
        printf("%d ", n);
    fclose(fp);

    return 0;
}
