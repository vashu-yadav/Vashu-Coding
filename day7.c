#include <stdio.h>

int main(){
    int year; 
    printf(" enter the year ");
    scanf(" %d", &year);// year divisible by 4 so input year must be >= 400(year) is a leap year
                        // year divisible by 4 & input year is < 400(year) is not a leap year
    if ( year % 4==0){
        printf(" the year is leap year");
    }
    else {
        printf(" the year is not a leap year ");
    } 
    return 0;
}