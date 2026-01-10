#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s = {101, 85.5};
    struct Student *ptr = &s;
    
    printf("Roll: %d, Marks: %.1f\n", ptr->roll, ptr->marks);
    
    // Modify via pointer
    ptr->marks = 92.0;
    printf("Updated Marks: %.1f\n", s.marks);
    return 0;
}
