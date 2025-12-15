#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <input> <output>\n", argv[0]);
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    if (!in) {
        perror("fopen input");
        return 1;
    }

    FILE *out = fopen(argv[2], "w");
    if (!out) {
        perror("fopen output");
        fclose(in);
        return 1;
    }

    char buffer[1024];
    int line = 1;

    while (fgets(buffer, sizeof(buffer), in)) {
        fprintf(out, "%4d: %s", line++, buffer);
    }

    fclose(in);
    fclose(out);
    return 0;
}
