//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main(){
    int a,b;
    printf("enter length \n", a);
    scanf("%d", &a);
    
    printf("enter breadth \n", b);
    scanf("%d", &b);

    printf(" area of rectangle is %d \n", a*b);


    int lenghth = 2;
    int breadth = 3;
    printf("permeter of rectangle is %d \n", 2*(lenghth + breadth));
    return 0;
}