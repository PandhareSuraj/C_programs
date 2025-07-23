//  Implement a stack library of integers using a static implementation of the stack and implementing the operations like init(S) , S = push(S) , and S = pop(S) . Write a driver program that includes the stack library and calls different stack operations.

#include "stack_library_static.h"

void main(){

    Stack S;

    init(&S);

    S = push(S, 10);
    S = push(S, 3);
    S = push(S, 40);


    printf("top element : %d", peek(&S));

    S = pop(S);
    S = push(S,50);

    while(!isEmpty(&S)) {
        printf("Popping elements: %d\n",peek(&S));
        S = pop(S);
    }
}