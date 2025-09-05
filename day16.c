//*
//**
//***
//****
//Q-4 Right angled triangle

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {        // rows
        for (int j = 1; j <= i; j++) {    // stars equal to row no.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
