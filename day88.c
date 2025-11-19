

#include <stdio.h>

int pivotIndex(int nums[], int n) {
    int total = 0, left_sum = 0;
    for (int i = 0; i < n; i++)
        total += nums[i];
    
    for (int i = 0; i < n; i++) {
        if (left_sum == total - left_sum - nums[i])
            return i;
        left_sum += nums[i];
    }
    return -1;
}

int main() {
    int nums[] = {1,7,3,6,5,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int pivot = pivotIndex(nums, n);
    printf("%d\n", pivot);
    return 0;
}
