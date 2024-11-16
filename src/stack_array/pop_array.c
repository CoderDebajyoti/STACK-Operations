#include <stdio.h>
#include "stack.h"

// Pop Function Implementation
void pop() {
    if (isStackEmpty()) {
        printf("Stack Is Empty\n");
    } else {
        printf("Popped element = %d\n", arr[top--]); // Print and decrement top
    }
}
