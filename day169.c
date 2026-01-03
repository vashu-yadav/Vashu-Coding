#include <stdio.h>

int main() {
    char *s = "int main() {%c    char *s = %c%s%c;%c    printf(s, 10, 34, s, 34, 10, 10);%c    return 0;%c}%c";
    printf("#include <stdio.h>%c%c", 10, 10);
    printf(s, 10, 34, s, 34, 10, 10, 10, 10);
    return 0;
}
