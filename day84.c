
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline

    int len = strlen(name);
    int i = 0;

    // Print initials of first names
    while (i < len) {
        if (i == 0 || name[i-1] == ' ') {
            if (i < len-1 && name[i+1] != ' ') {
                printf("%c.", name[i]);
            }
        }
        i++;
    }

    // Find the last space to print surname
    for (i = len-1; i >= 0; i--) {
        if (name[i] == ' ') {
            printf(" %s", &name[i+1]);
            break;
        }
    }
    printf("\n");
    return 0;
}
