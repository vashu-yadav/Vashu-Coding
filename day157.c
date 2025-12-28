#include <stdio.h>
#include <stdlib.h>

typedef struct Block {
    void *ptr;
    size_t size;
    struct Block *next;
} Block;

static Block *head = NULL;

void *track_malloc(size_t size) {
    void *p = malloc(size);
    if (!p) return NULL;

    Block *node = malloc(sizeof *node);
    if (!node) {
        free(p);
        return NULL;
    }
    node->ptr = p;
    node->size = size;
    node->next = head;
    head = node;
    return p;
}

void track_free(void *p) {
    if (!p) return;
    Block **cur = &head;
    while (*cur && (*cur)->ptr != p) {
        cur = &(*cur)->next;
    }
    if (*cur) {
        Block *tmp = *cur;
        *cur = tmp->next;
        free(tmp->ptr);
        free(tmp);
    } else {
        /* free not tracked pointer -> ignore or warn */
    }
}

void report_leaks(void) {
    size_t total = 0;
    Block *cur = head;
    while (cur) {
        total += cur->size;
        cur = cur->next;
    }
    if (total) {
        printf("[LEAK REPORT] %zu bytes not freed\n", total);
    } else {
        printf("[LEAK REPORT] No leaks detected\n");
    }
}

int main(void) {
    atexit(report_leaks);

    char *name = track_malloc(50);
    if (!name) return 1;

    printf("Enter your name: ");
    if (scanf("%49s", name) != 1) {
        track_free(name);
        return 1;
    }

    printf("Hello, %s\n", name);

    /* Intentionally comment/uncomment next line to see leak report */
    track_free(name);

    return 0;
}
