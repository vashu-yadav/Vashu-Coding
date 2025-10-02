//practice questions

#include<stdio.h>
void main(){
    int a[]={10,20,30,40,50,};

    //print Base address of array
    printf("B.A = %u",a);
    //print address of elements
    int i;
    for(i=0;i<5;i++){
        printf("\n %u, %u",&a[i],a+i);
    }   
}