
#include <stdio.h>

int main() {
    int nums[] = {0, 3, 2, 4}; // Change input as required
    int n = sizeof(nums)/sizeof(nums[0]);
    int total_xor = 0, arr_xor = 0, i;
    for (i = 0; i <= n; i++) total_xor ^= i;
    for (i = 0; i < n; i++) arr_xor ^= nums[i];
    printf("%d\n", total_xor ^ arr_xor);
    return 0;
}