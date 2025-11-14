
void countVowelsConsonants(char *str, int *vowels, int *consonants) {
    int i = 0;
    *vowels = 0;
    *consonants = 0;
    while(str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}
