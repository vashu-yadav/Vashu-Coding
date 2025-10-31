//practice questions

#include <stdio.h>

int main() {
    int n1, n2;
    
    // Input size of first array
    scanf("%d", &n1);
    int arr1[n1];
    
    // Input elements of first array
    for(int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    
    // Input size of second array
    scanf("%d", &n2);
    int arr2[n2];
    
    // Input elements of second array
    for(int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    
    // Create merged array
    int merged[n1 + n2];
    
    // Copy elements of arr1
    for(int i = 0; i < n1; i++)
        merged[i] = arr1[i];
    
    // Copy elements of arr2
    for(int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];
    
    // Print merged array
    for(int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    
    return 0;
}
