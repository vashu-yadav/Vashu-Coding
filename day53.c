//practice questions

#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Input key to search
    scanf("%d", &key);
    
    int low = 0, high = n - 1, mid;
    int found = -1;
    
    // Binary search logic
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");
    
    return 0;
}
