// isEmpty_linked_list.c
#include "stack.h"

// Global head pointer for the stack
extern struct node *head;

// Check if the stack is empty
int isEmpty() {
    return head == NULL;
}
