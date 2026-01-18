#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person *ptr = (struct Person*)malloc(sizeof(struct Person));
    printf("Enter name, age, salary: ");
    scanf("%s %d %f", ptr->name, &ptr->age, &ptr->salary);
    printf("Details: %s, %d years, Rs.%.2f\n", ptr->name, ptr->age, ptr->salary);
    free(ptr);  // Good practice for dynamic allocation
    return 0;
}
