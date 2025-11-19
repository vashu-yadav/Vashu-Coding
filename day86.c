#include <stdio.h>

int binarySearch(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            if (findFirst)
                high = mid - 1;
            else
                low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[] = {5,7,7,8,8,10};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int first = binarySearch(nums, n, target, 1);
    int last = binarySearch(nums, n, target, 0);
    
    if (first == -1) 
        printf("-1,-1\n");
    else
        printf("%d,%d\n", first, last);
        
    return 0;
}
