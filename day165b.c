#include <stdio.h>

void multiply(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int c[10][10] = {0};

    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            for(int k=0;k<c1;k++)
                c[i][j] += a[i][k] * b[k][j];

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], r1, c1, c2;

    scanf("%d %d",&r1,&c1);
    scanf("%d",&c2);

    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<c1;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    multiply(a,b,r1,c1,c2);
    return 0;
}
