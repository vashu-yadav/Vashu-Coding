#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;              // points to arr[0]

    printf("%d\n", *p);        // 10
    p++;                       // moves to next int (arr[1])
    printf("%d\n", *p);        // 20

    p = p + 2;                 // now points to arr[3]
    printf("%d\n", *p);        // 40
    return 0;
}
