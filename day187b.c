#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[3] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78}
    };
    printf("Students with marks > 80:\n");
    for (int i = 0; i < 3; i++) {
        if (students[i].marks > 80) {
            printf("%s: %d\n", students[i].name, students[i].marks);
        }
    }
    return 0;
}
