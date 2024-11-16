// peek_linked_list.c
#include "stack.h"

// Global head pointer for the stack
extern struct node *head;

// Peek the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return -1;
    }
    return head->data;
}
