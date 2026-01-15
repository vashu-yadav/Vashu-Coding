#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);
    int mat[10][10], trans[10][10];
    printf("Enter matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            trans[i][j] = mat[j][i];
        }
    }
    printf("Transpose:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}