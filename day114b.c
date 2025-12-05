
#include <stdio.h>
#define LOOP(i,n) \
for(i=0;i<n;i++)

int main() {
    int i;
    LOOP(i,5)
        printf("%d ", i);
}
