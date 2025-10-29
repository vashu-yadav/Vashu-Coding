//practice questions

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    // input matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    // upper diagonals (including main diagonal)
    for (int col = 0; col < m; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // lower diagonals (below main diagonal)
    for (int row = 1; row < n; row++) {
        int i = row, j = m - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
