//practice questions

#include <stdio.h>
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        int digit = temp % 10, fact = 1;
        for(int i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    if(sum == n)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");
    return 0;
}
