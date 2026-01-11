#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int countEven(Node* head) {
    int count = 0;
    while (head != NULL) {
        if (head->data % 2 == 0) count++;
        head = head->next;
    }
    return count;
}

int main() {
    srand(time(NULL));
    Node* head = NULL;
    for (int i = 0; i < 10; i++) {
        insertEnd(&head, rand() % 20);
    }
    printf("Even numbers in list: %d\n", countEven(head));
    // Free memory omitted for brevity
    return 0;
}
