//practice questions
#include<stdio.h>
void main(){
  int a=2;
    switch(a){
        case 1:
        printf("A");
        
        case 2:goto x;
        case 3:printf("C");
    }
        x: printf("Bye");
        
    }
