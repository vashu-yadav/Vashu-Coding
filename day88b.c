#include <stdio.h>

int main() {
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);
    int merged[m+n], i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    for (i = 0; i < m+n; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}
