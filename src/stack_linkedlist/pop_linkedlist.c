// pop_linked_list.c
#include "stack.h"

// Global head pointer for the stack
extern struct node *head;

// Pop the top element from the stack
void pop() {
    if (isEmpty()) {
        printf("Stack is Empty\n");
        return;
    }
    struct node *temp = head;
    printf("Popped element = %d\n", head->data);
    head = head->next;
    free(temp);
}
