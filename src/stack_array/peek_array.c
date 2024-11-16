#include <stdio.h>
#include "stack.h"

// Peek Function Implementation
void peek() {
    if (isStackEmpty()) {
        printf("Stack Is Empty\n");
    } else {
        printf("Top element = %d\n", arr[top]);
    }
}
