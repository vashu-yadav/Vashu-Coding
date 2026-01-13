#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }
    printf("\nStudent Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (Roll: %d) - Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}