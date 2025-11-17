
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    char temp;
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    char *word_start = NULL;
    for(int i=0; ; i++) {
        if((str[i] != ' ' && str[i] != '\0' && str[i] != '\n') && word_start == NULL) {
            word_start = &str[i];
        }
        if((str[i] == ' ' || str[i] == '\0' || str[i] == '\n') && word_start != NULL) {
            reverseWord(word_start, &str[i-1]);
            word_start = NULL;
        }
        if(str[i] == '\0')
            break;
    }
    printf("%s", str);
    return 0;
}
