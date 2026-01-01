#include<stdio.h>


int main() {
    FILE *fp;
    char ch;
    int lines=1, words=0;

    fp = fopen("data.txt","r");

    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n') lines++;
        if(ch == ' ' || ch == '\n') words++;
    }

    fclose(fp);
    printf("Lines: %d Words: %d", lines, words+1);
    return 0;
}