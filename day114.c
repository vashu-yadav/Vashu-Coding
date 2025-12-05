
#include <stdio.h>

#define DEBUG 1

int main(){
#if DEBUG
    printf("Debug mode ON\n");
#else
    printf("Debug mode OFF\n");
#endif
}
