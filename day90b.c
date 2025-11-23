
#include <stdio.h>

int findRepeated(int nums[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= nums[i];  // XOR all elements
    }
    for (int i = 1; i <= size - 2; i++) {
        result ^= i;  // XOR with numbers from 1 to size-2
    }
    return result;
}

int main() {
    int nums[] = {1, 3, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", findRepeated(nums, size));
    return 0;
}
