#include <stdio.h>
#include "stack.h"

int main() {
    // Push elements into the stack
    push(10);
    push(13);
    push(5);
    push(26);
    push(100);
    push(78); // Cannot push as stack is full

    // Peek at the top element
    peek(); // Should display 100

    // Pop elements from the stack
    pop(); // 100
    pop(); // 26
    pop(); // 5
    pop(); // 13
    pop(); // 10
    pop(); // Cannot pop as stack is empty

    return 0;
}
