
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;
    int i = 0;
    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            currLen++;
        else {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxStart = i - currLen;
            }
            currLen = 0;
            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }
    for(i = maxStart; i < maxStart + maxLen; i++)
        putchar(str[i]);
    putchar('\n');
    return 0;
}
