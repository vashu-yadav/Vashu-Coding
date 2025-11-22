#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15}; // Change input as required
    int target = 9;
    int n = sizeof(nums)/sizeof(nums[0]), i, j, found = 0;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found)
        printf("-1 -1\n");
    return 0;
}
