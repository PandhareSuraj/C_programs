// Implement a stack library of integers using a dynamic implementation of the stack and implementing the operations like init(S) , S = push(S) , and isFull(S) . Write a driver program that includes the stack library and calls different stack operations.

# include "stack_library_dynamic.h"

void main(){
    Stack S;

    init(&S);

    push(&S,10);
    push(&S,20);
    push(&S,30);

    printf("Top elements popped:%d \n", pop(&S));
    printf("Top elements popped:%d \n", pop(&S));
    printf("Top elements popped:%d \n", pop(&S));
    printf("Top elements popped:%d \n", pop(&S));
}