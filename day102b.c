
#include <stdio.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice = ADD;
    int a = 10, b = 5;
    int result;

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Addition: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Subtraction: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Multiplication: %d\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
