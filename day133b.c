#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int cmp_str(const void *a, const void *b) {
    const char * const *sa = a;
    const char * const *sb = b;
    return strcmp(*sa, *sb);
}

void print_ints(int *arr, int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void print_strs(char *arr[], int n) {
    for (int i = 0; i < n; i++) printf("%s ", arr[i]);
    printf("\n");
}

int main(void) {
    int a[] = {42, 5, 13, 9, 1};
    int n = sizeof(a) / sizeof(a[0]);
    qsort(a, n, sizeof(int), cmp_int);
    printf("Sorted ints: ");
    print_ints(a, n);

    char *names[] = {"vashu", "rahul", "amit", "sachin"};
    int m = sizeof(names) / sizeof(names[0]);
    qsort(names, m, sizeof(char *), cmp_str);
    printf("Sorted strings: ");
    print_strs(names, m);

    return 0;
}
