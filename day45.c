// ptactice question 

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Input number of rows and columns

    int matrix[rows][cols];
    int rowSum[rows]; // Array to store sum of each row

    // Input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
