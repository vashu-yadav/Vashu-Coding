#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float cgpa;
};

int main(void) {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    struct Student *p = s;

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %49s", p[i].name);
        printf("Roll: ");
        scanf("%d", &p[i].roll);
        printf("CGPA: ");
        scanf("%f", &p[i].cgpa);
    }

    printf("\nStudent details:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Roll %d) -> %.2f\n",
               p[i].name, p[i].roll, p[i].cgpa);
    }

    return 0;
}
