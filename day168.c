#include <stdio.h>
#include <string.h>

#define MAX_STUD 50

struct Student {
    int roll;
    char name[30];
    float cgpa;
};

int main(void) {
    struct Student s[MAX_STUD];
    int n;

    printf("How many students (max %d)? ", MAX_STUD);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_STUD) {
        printf("Invalid count.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %29[^\n]", s[i].name);

        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    int target;
    printf("\nEnter roll to search: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll == target) {
            printf("\nFound:\n");
            printf("Roll: %d\nName: %s\nCGPA: %.2f\n",
                   s[i].roll, s[i].name, s[i].cgpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with roll %d not found.\n", target);
    }

    return 0;
}
