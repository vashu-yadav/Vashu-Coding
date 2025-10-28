//practice questions

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) {
        printf("False\n");
        return 0;
    }

    // Check symmetry
    int symmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
