#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s[], int n) {
    for(int i=0;i<n;i++) {
        printf("\nRoll: %d  Name: %s  Marks: %.2f",
               s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[50];
    int n, ch;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%d %s %f",&s[i].roll, s[i].name, &s[i].marks);
    }

    display(s,n);
    return 0;
}
