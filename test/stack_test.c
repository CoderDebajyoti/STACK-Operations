#include <stdio.h>
#include <assert.h>
#include "stack.h"

void test_push() {
    printf("Testing push operation...\n");

    // Reset the stack
    top = -1;

    // Push elements and check the top value
    push(10);
    assert(arr[top] == 10);

    push(20);
    assert(arr[top] == 20);

    push(30);
    assert(arr[top] == 30);

    push(40);
    push(50);

    // Try pushing beyond capacity
    push(60); // Stack should be full
    assert(isStackFull() == 1);

    printf("Push test passed!\n");
}

void test_pop() {
    printf("Testing pop operation...\n");

    // Reset the stack with some values
    top = -1;
    push(10);
    push(20);
    push(30);

    int initialTop = top;

    // Pop elements and verify
    pop();
    assert(top == initialTop - 1);
    initialTop--;

    pop();
    assert(top == initialTop - 1);
    initialTop--;

    pop();
    assert(top == -1); // Stack is now empty

    // Try popping from an empty stack
    pop();
    assert(isStackEmpty() == 1);

    printf("Pop test passed!\n");
}

void test_peek() {
    printf("Testing peek operation...\n");

    // Reset the stack with some values
    top = -1;
    push(100);
    push(200);

    // Check the top value
    assert(arr[top] == 200);
    printf("Top element = ");
    peek(); // Should display 200

    printf("Peek test passed!\n");
}

void test_isEmpty_and_isFull() {
    printf("Testing isEmpty and isFull...\n");

    // Reset the stack
    top = -1;

    // Check isEmpty on an empty stack
    assert(isStackEmpty() == 1);

    // Add elements and check isFull
    push(1);
    assert(isStackEmpty() == 0);

    for (int i = 2; i <= SIZE; i++) {
        push(i);
    }
    assert(isStackFull() == 1);

    printf("isEmpty and isFull tests passed!\n");
}

int main() {
    printf("Running all tests...\n\n");

    test_push();
    test_pop();
    test_peek();
    test_isEmpty_and_isFull();

    printf("\nAll tests passed successfully!\n");
    return 0;
}