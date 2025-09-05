//****
//***
//**
//*
//Q-5 Inverted right angled triangle

#include <stdio.h>

int main() {
    for (int i = 4; i >= 1; i--) {         // start from 4 stars, go down to 1
        for (int j = 1; j <= i; j++) {     // print i stars
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
