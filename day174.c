#include<stdio.h>


struct Student {
    char name[50];
    int roll;
    float cgpa;
};

int main(void) {
    struct Student s;
    FILE *fp;

    printf("Enter name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File error.\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nRoll: %d\nCGPA: %.2f\n", s.name, s.roll, s.cgpa);
    fclose(fp);

    printf("Student details saved to student.txt\n");
    return 0;
}