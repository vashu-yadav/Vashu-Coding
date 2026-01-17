#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

int main() {
    struct Student s1 = {27, "Geek", "CSE", 2019};
    struct Student* ptr = &s1;

    // Using dereference and dot
    printf("%d\n", (*ptr).roll_no);
    printf("%s\n", (*ptr).name);

    // Using arrow operator
    printf("%s\n", ptr->branch);
    printf("%d\n", ptr->batch);

    return 0;
}
