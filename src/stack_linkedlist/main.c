// main.c
#include "stack.h"

// Define the global head pointer
struct node *head = NULL;

int main() {
    push(10);
    push(20);
    push(30);

    printf("Stack elements: ");
    printList();

    printf("Top element (peek): %d\n", peek());

    pop();
    printf("After pop, stack elements: ");
    printList();

    pop();
    printf("After pop, stack elements: ");
    printList();

    return 0;
}
