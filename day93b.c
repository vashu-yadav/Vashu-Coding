
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    // read full line (including spaces)
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int newWord = 1;  // first character starts a word

    while (str[i] != '\0') {
        if (newWord && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');   // to upper
            newWord = 0;
        } else if (str[i] == ' ') {
            newWord = 1;
        } else {
            newWord = 0;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
