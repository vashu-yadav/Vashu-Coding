//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main(){
    int TIMEinSEC;
    int hours,minutes,seconds;
    printf("enter time in seconds : ");
    scanf("%d", &TIMEinSEC);
    hours = TIMEinSEC / 3600;
    minutes = (TIMEinSEC %3600) / 60;
    seconds = TIMEinSEC % 60;

    printf(" time in hours , minutes , seconds = %d , %d ,%d ", hours, minutes,seconds);

    return 0;
}