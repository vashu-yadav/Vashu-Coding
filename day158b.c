#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll;
    char name[32];
    float cgpa;
} Student;

typedef struct {
    int roll;
    long offset;
} IndexEntry;

int main(void) {
    const char *data_file = "students.bin";
    FILE *fp = fopen(data_file, "ab+");
    if (!fp) {
        perror("fopen");
        return 1;
    }

    IndexEntry *idx = NULL;
    size_t idx_count = 0, idx_cap = 0;

    rewind(fp);
    long pos;
    Student s;
    while ((pos = ftell(fp)), fread(&s, sizeof s, 1, fp) == 1) {
        if (idx_count == idx_cap) {
            idx_cap = idx_cap ? idx_cap * 2 : 8;
            idx = realloc(idx, idx_cap * sizeof *idx);
            if (!idx) {
                perror("realloc");
                fclose(fp);
                return 1;
            }
        }
        idx[idx_count].roll = s.roll;
        idx[idx_count].offset = pos;
        idx_count++;
    }

    int choice;
    while (1) {
        printf("\n1. Add student\n2. Find by roll\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 1) {
            Student ns;
            printf("Roll Name CGPA: ");
            scanf("%d %31s %f", &ns.roll, ns.name, &ns.cgpa);

            fseek(fp, 0, SEEK_END);
            long off = ftell(fp);
            fwrite(&ns, sizeof ns, 1, fp);
            fflush(fp);

            if (idx_count == idx_cap) {
                idx_cap = idx_cap ? idx_cap * 2 : 8;
                idx = realloc(idx, idx_cap * sizeof *idx);
                if (!idx) {
                    perror("realloc");
                    break;
                }
            }
            idx[idx_count].roll = ns.roll;
            idx[idx_count].offset = off;
            idx_count++;
        } else if (choice == 2) {
            int r;
            printf("Enter roll: ");
            scanf("%d", &r);
            long off = -1;
            for (size_t i = 0; i < idx_count; i++) {
                if (idx[i].roll == r) {
                    off = idx[i].offset;
                    break;
                }
            }
            if (off == -1) {
                printf("Not found\n");
            } else {
                fseek(fp, off, SEEK_SET);
                fread(&s, sizeof s, 1, fp);
                printf("Roll: %d Name: %s CGPA: %.2f\n",
                       s.roll, s.name, s.cgpa);
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    free(idx);
    fclose(fp);
    return 0;
}
