#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *push(Node *head, int data) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

int has_loop(Node *head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}

int main(void) {
    Node *head = NULL;
    head = push(head, 4);
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);

    head->next->next->next = head->next;  // create loop

    if (has_loop(head))
        printf("Loop detected\n");
    else
        printf("No loop\n");

    // In real code, break loop and free nodes
    return 0;
}
