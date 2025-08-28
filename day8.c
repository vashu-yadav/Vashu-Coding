//write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet,digit or special character.

#include <stdio.h>

int main(){
    char a;
    printf(" Enter the character : ");
    scanf("%c", &a);
    printf(" %d\n", a);

    if ( a >= 65 && a <= 90){
        printf(" The character is an uppercase alphabet \n");
    }
    else if ( a >= 97 && a <= 122){
        printf(" The character is lowercase alphabet \n");
    }
    else if ( a >= 48 && a <= 57){
        printf(" The character is digit \n");
    }
    else {
        printf(" The character is special character \n");
    }
    return 0;
}