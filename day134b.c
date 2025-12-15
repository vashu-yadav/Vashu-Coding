#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float cgpa;
} Student;

int main(void) {
    Student *arr = NULL;
    int size = 0, capacity = 0;
    int choice;

    while (1) {
        printf("\n1. Add student\n2. List students\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 1) {
            if (size == capacity) {
                int new_cap = capacity == 0 ? 2 : capacity * 2;
                Student *tmp = realloc(arr, new_cap * sizeof(Student));
                if (!tmp) {
                    printf("Allocation failed\n");
                    free(arr);
                    return 1;
                }
                arr = tmp;
                capacity = new_cap;
            }
            printf("Enter name age cgpa: ");
            scanf("%49s%d%f", arr[size].name, &arr[size].age, &arr[size].cgpa);
            size++;
        } else if (choice == 2) {
            for (int i = 0; i < size; i++) {
                printf("%d. %s %d %.2f\n", i + 1, arr[i].name, arr[i].age, arr[i].cgpa);
            }
        } else if (choice == 3) {
            break;
        }
    }

    free(arr);
    return 0;
}
