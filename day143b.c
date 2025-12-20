#include<stdio.h>


typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main(void) {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s[100];
    if (n > 100) {
        printf("Limit 100 students.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudents scoring >= 75:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks >= 75.0f) {
            printf("%s (Roll %d) -> %.2f\n",
                   s[i].name, s[i].roll, s[i].marks);
        }
    }

    return 0;
}