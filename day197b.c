#include <stdio.h>

void matrixTranspose(int rows, int cols, int mat[][3]) {
    int trans[3][2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[][3] = {{1, 2, 3}, {4, 5, 6}};
    matrixTranspose(2, 3, mat);
    return 0;
}