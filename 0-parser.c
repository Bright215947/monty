#include "monty.h"

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int stack_top = 0;

void push(int value) {
    if (stack_top == MAX_STACK_SIZE) {
        fprintf(stderr, "Error: stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[stack_top++] = value;
}

void pall() {
    for (int i = stack_top - 1; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

