#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DB_FILE "students.dat"

typedef struct {
    int roll;
    char name[50];
    float cgpa;
} Student;

void add_student(void) {
    FILE *fp = fopen(DB_FILE, "ab");
    if (!fp) {
        perror("Cannot open DB file");
        return;
    }

    Student s;
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    if (fwrite(&s, sizeof(Student), 1, fp) != 1) {
        perror("Write failed");
    } else {
        printf("Student added.\n");
    }
    fclose(fp);
}

void list_students(void) {
    FILE *fp = fopen(DB_FILE, "rb");
    if (!fp) {
        perror("Cannot open DB file");
        return;
    }

    Student s;
    printf("\n--- All Students ---\n");
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("Roll: %d | Name: %s | CGPA: %.2f\n", s.roll, s.name, s.cgpa);
    }
    fclose(fp);
}

void search_student(void) {
    int roll;
    printf("Enter roll to search: ");
    scanf("%d", &roll);

    FILE *fp = fopen(DB_FILE, "rb");
    if (!fp) {
        perror("Cannot open DB file");
        return;
    }

    Student s;
    int found = 0;
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.roll == roll) {
            printf("Found: Roll %d | Name: %s | CGPA: %.2f\n",
                   s.roll, s.name, s.cgpa);
            found = 1;
            break;
        }
    }
    if (!found) printf("No student with roll %d\n", roll);
    fclose(fp);
}

int main(void) {
    int choice;
    while (1) {
        printf("\n1. Add student\n2. List students\n3. Search student\n4. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1: add_student(); break;
            case 2: list_students(); break;
            case 3: search_student(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
