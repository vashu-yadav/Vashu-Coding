
#include <stdio.h>
#include <string.h>

int areAnagrams(char s1[], char s2[]) {
    int count[256] = {0};
    int i;

    if(strlen(s1) != strlen(s2))
        return 0;

    for(i = 0; s1[i]; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    for(i = 0; i < 256; i++)
        if(count[i] != 0)
            return 0;
    return 1;
}

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
    if(areAnagrams(s1, s2))
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}
