//practice question

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of first matrix
    scanf("%d %d", &rows1, &cols1);
    int a[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &rows2, &cols2);
    int b[rows2][cols2];

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    // Add the matrices
    int sum[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the sum matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
