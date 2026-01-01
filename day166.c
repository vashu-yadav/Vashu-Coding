#include <stdio.h>

int main() {
    char str[100];
    int count;

    scanf("%s", str);

    for(int i=0; str[i]; i++) {
        count = 1;
        while(str[i] == str[i+1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    return 0;
}
