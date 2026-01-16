#include <stdio.h>

struct Student {
    char name[20];
    float gpa;
};

int main() {
    struct Student students[3] = {
        {"Alice", 3.8f}, {"Bob", 3.9f}, {"Charlie", 3.5f}
    };
    int max_idx = 0;
    printf("Students:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: %.1f\n", students[i].name, students[i].gpa);
        if (students[i].gpa > students[max_idx].gpa) max_idx = i;
    }
    printf("Top: %s (%.1f)\n", students[max_idx].name, students[max_idx].gpa);  // Bob 3.9
    return 0;
}