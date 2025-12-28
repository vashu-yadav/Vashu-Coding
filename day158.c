#include <stdio.h>

typedef struct {
    unsigned read  : 1;
    unsigned write : 1;
    unsigned exec  : 1;
    unsigned       : 5;
} PermBits;

#define SET_FLAG(v, mask)   ((v) |=  (mask))
#define CLEAR_FLAG(v, mask) ((v) &= ~(mask))
#define HAS_FLAG(v, mask)   (((v) & (mask)) != 0)

enum {
    F_READ  = 1 << 0,
    F_WRITE = 1 << 1,
    F_EXEC  = 1 << 2
};

void print_perms(PermBits p) {
    printf("Permissions: %s%s%s\n",
           p.read  ? "r" : "-",
           p.write ? "w" : "-",
           p.exec  ? "x" : "-");
}

int main(void) {
    PermBits p = {0};

    int flags = 0;
    SET_FLAG(flags, F_READ);
    SET_FLAG(flags, F_WRITE);

    p.read  = HAS_FLAG(flags, F_READ);
    p.write = HAS_FLAG(flags, F_WRITE);
    p.exec  = HAS_FLAG(flags, F_EXEC);

    print_perms(p);

    printf("Adding exec...\n");
    SET_FLAG(flags, F_EXEC);
    p.exec = HAS_FLAG(flags, F_EXEC);
    print_perms(p);

    printf("Removing write...\n");
    CLEAR_FLAG(flags, F_WRITE);
    p.write = HAS_FLAG(flags, F_WRITE);
    print_perms(p);

    return 0;
}