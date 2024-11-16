#include <stdio.h>
#include "stack.h"

// Push Function Implementation
void push(int val) {
    if (isStackFull()) {
        printf("Unable to push %d as the Stack Is Full\n", val);
    } else {
        arr[++top] = val; // Increment top and push element
        printf("Pushed element = %d\n", val);
    }
}
