//practice questions
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Input number of rows and columns

    int matrix[rows][cols]; // Declare 2D array

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

