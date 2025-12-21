#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    float cgpa;
} Student;

void swap(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (s[j].cgpa < s[j + 1].cgpa) {
                swap(&s[j], &s[j + 1]);
            }
        }
    }

    printf("\nStudents sorted by CGPA (desc):\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Roll %d) -> %.2f\n", s[i].name, s[i].roll, s[i].cgpa);
    }

    return 0;
}
