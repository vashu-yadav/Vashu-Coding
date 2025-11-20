

#include <stdio.h>

void majorityElement(int nums[], int n) {
    int candidate = -1, count = 0;
    // Boyer-Moore Voting Algorithm
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // Verify candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate)
            count++;
    }
    if(count > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");
}