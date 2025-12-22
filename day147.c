#include<stdio.h>


int main() {
    int x = 5;

    printf("Initial x = %d\n", x);

    // increment and decrement
    printf("x++ = %d\n", x++);  // prints old x, then x becomes 6
    printf("After x++, x = %d\n", x);

    printf("++x = %d\n", ++x);  // x becomes 7, then prints 7

    printf("x-- = %d\n", x--);  // prints 7, then x becomes 6
    printf("--x = %d\n", --x);  // x becomes 5, then prints 5

    // compound assignment
    x += 10;   // x = x + 10
    printf("After x += 10, x = %d\n", x);

    x *= 2;    // x = x * 2
    printf("After x *= 2, x = %d\n", x);

    return 0;
}
