//practice questions

#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);
    
    int freq[10] = {0};  // To store frequency of digits 0–9
    
    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    int maxFreq = 0, result = 0;
    
    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }
    
    printf("%d", result);
    return 0;
}
