// practice questions

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols); // Input number of rows and columns

    int matrix[rows][cols];
    int sum = 0;

    // Input matrix elements and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print the sum of all elements
    printf("%d\n", sum);

    return 0;
}
