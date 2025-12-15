#include<stdio.h>

#define READ   0x1
#define WRITE  0x2
#define EXEC   0x4

void print_perms(unsigned int p) {
    printf("Permissions: ");
    if (p & READ)  printf("R");
    if (p & WRITE) printf("W");
    if (p & EXEC)  printf("X");
    if (!(p & (READ | WRITE | EXEC))) printf("NONE");
    printf(" (0x%X)\n", p);
}

int main(void) {
    unsigned int perms = 0;

    perms |= READ;
    perms |= WRITE;
    print_perms(perms);

    perms &= ~WRITE;
    print_perms(perms);

    perms ^= EXEC;
    print_perms(perms);

    if (perms & READ) {
        printf("Read is allowed\n");
    }

    return 0;
}