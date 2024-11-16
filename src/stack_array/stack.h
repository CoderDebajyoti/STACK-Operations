#ifndef STACK_H
#define STACK_H

#define SIZE 5

// Stack Structure
extern int arr[SIZE];
extern int top;

// Function Declarations
int isStackFull();
int isStackEmpty();
void push(int val);
void pop();
void peek();

#endif
