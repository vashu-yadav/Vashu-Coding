
#include <stdio.h>


struct node {
    int data;
    struct node *next;
};

int main() {
    struct node a = {10, NULL};
    struct node b = {20, NULL};
    struct node c = {30, NULL};

    a.next = &b;
    b.next = &c;

    struct node *p = a.next;
    p->next = &a;

    printf("%d %d %d\n", a.next->data, b.next->data, c.next->data);
    return 0;
}