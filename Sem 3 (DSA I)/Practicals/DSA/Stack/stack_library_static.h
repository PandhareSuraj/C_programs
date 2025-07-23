#include <stdio.h>
#include <stdbool.h>
#define MAX 100  

typedef struct{
    int data[MAX];
    int top;
} Stack;

void init(Stack *S){
    S->top = -1;
}

bool isEmpty(Stack * S) {
    return S->top == -1;
}

bool isFull(Stack * S){
    return S->top == MAX-1;
}

Stack push(Stack S, int value){
    if(isFull(&S) == true){
        printf("Stack is full");
        return S;
    }
    S.data[++S.top] = value;  
    return S;
}

Stack pop(Stack S){
    if(isEmpty(&S) == true){
        printf("Stack is empty");
        return S;
    }
    S.top--;
    return S;
}

int peek(Stack * S){
    if(isEmpty(S)){
        printf("stack is empty cannot peek");
        return -1;
    }
    return S->data[S->top];
}