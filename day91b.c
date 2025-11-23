
#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char str[]) {
    int capitalizeNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str[] = "I am trying to build logic.";
    toSentenceCase(str);
    printf("%s\n", str);
    return 0;
}
