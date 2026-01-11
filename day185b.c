#include <stdio.h>
#include <string.h>

int isAnagram(char* s1, char* s2) {
    int count1[256] = {0};
    int count2[256] = {0};
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 != len2) return 0;
    for (int i = 0; i < len1; i++) {
        count1[(unsigned char)s1[i]]++;
        count2[(unsigned char)s2[i]]++;
    }
    return memcmp(count1, count2, sizeof(count1)) == 0;
}

int main() {
    char s1[100], s2[100];
    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);
    printf("Anagram: %s\n", isAnagram(s1, s2) ? "Yes" : "No");
    return 0;
}
