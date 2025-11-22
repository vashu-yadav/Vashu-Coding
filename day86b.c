
#include <stdio.h>
#include <string.h>

int isAnagram(char *s, char *t) {
    int freq[26] = {0}, freq2[26] = {0};
    int i;
    for (i = 0; s[i]; i++) freq[s[i] - 'a']++;
    for (i = 0; t[i]; i++) freq2[t[i] - 'a']++;
    for (i = 0; i < 26; i++)
        if (freq[i] != freq2[i])
            return 0;
    return 1;
}

int main() {
    char s[] = "anagram", t[] = "nagaram"; // Change input as required
    if(isAnagram(s, t))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");
    return 0;
}
