// push_linked_list.c
#include "stack.h"

// Global head pointer for the stack
extern struct node *head;

// Push the element onto the stack
void push(int val) {
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}
