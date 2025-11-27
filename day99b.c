

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(void)
{
    FILE *fp;
    struct Student s;
    int n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s%d%f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);   // write formatted record [web:16][web:19]
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file for reading.\n");
        return 1;
    }

    printf("\nStudent records:\n");
    while (fscanf(fp, "%s%d%f", s.name, &s.roll, &s.marks) == 3) {   // read back with fscanf [web:9][web:16]
        printf("Name: %s  Roll: %d  Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
