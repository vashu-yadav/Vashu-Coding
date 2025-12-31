#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nEnter roll, name, marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
