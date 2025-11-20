
#include <stdio.h>

void productExceptSelf(int nums[], int n) {
    int answer[n];

    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n - 1)
            printf(",");
    }
    printf("]\n");
}