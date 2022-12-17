#include "monty.h

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int stack_top = 0;

void pint() {
    if (stack_top == 0) {
        fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
    printf("%d\n", stack[stack_top - 1]);
}

