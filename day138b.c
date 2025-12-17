#include<stdio.h>


#define MAX 100

struct Student {
    char name[50];
    int roll;
    float marks[3];
    float percent;
};

void computePercent(struct Student *s) {
    float sum = 0;
    for (int i = 0; i < 3; i++)
        sum += s->marks[i];
    s->percent = sum / 3.0f;
}

void sortByPercent(struct Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].percent > a[maxIdx].percent)
                maxIdx = j;
        }
        if (maxIdx != i) {
            struct Student temp = a[i];
            a[i] = a[maxIdx];
            a[maxIdx] = temp;
        }
    }
}

int main() {
    int n;
    struct Student s[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);    // read full line
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter 3 subject marks: ");
        for (int j = 0; j < 3; j++)
            scanf("%f", &s[i].marks[j]);
        computePercent(&s[i]);
    }

    sortByPercent(s, n);

    printf("\nStudents sorted by percentage (desc):\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Roll %d) -> %.2f%%\n",
               s[i].name, s[i].roll, s[i].percent);
    }

    return 0;
}