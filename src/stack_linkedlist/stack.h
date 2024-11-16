// stack.h
#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

// Node structure for linked-list-based stack
struct node {
    int data;
    struct node *next;
};

void push(int val);
void pop();
int peek();
int isEmpty();
void printList();

#endif