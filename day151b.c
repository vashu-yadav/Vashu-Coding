#include <stdio.h>
#include <string.h>

#define MAX_STUD 100

typedef struct {
    int roll;
    char name[50];
    float cgpa;
} Student;

int main(void) {
    Student s[MAX_STUD];
    int n;

    printf("Number of students (<= %d): ", MAX_STUD);
    scanf("%d", &n);
    if (n < 1 || n > MAX_STUD) {
        printf("Invalid count\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name (no spaces): ");
        scanf("%49s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudents with CGPA >= 8.0:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].cgpa >= 8.0f) {
            printf("%d  %s  %.2f\n",
                   s[i].roll, s[i].name, s[i].cgpa);
        }
    }

    return 0;
}
