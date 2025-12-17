#include <stdio.h>

int isSparse(int rows, int cols, int a[rows][cols]) {
    int zeroCount = 0;
    int total = rows * cols;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (a[i][j] == 0)
                zeroCount++;

    return (zeroCount > total / 2);   // more than half are zero
}

int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (isSparse(r, c, a))
        printf("Sparse matrix\n");
    else
        printf("Not sparse\n");

    return 0;
}
