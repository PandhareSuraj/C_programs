#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

typedef struct Stack{
    Node *top;
}Stack;

void init(Stack* S){
    S->top = NULL;
}

bool isEmpty(Stack* S){
    return S->top == NULL;
}

void push(Stack * S, int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    
    newNode->data = value;
    newNode->next = S->top;
    S->top = newNode;
}

int pop(Stack * S){
    if(isEmpty(S)){
        printf("stack is empty");
        return -1;
    }
    Node * temp = S->top;
    int val = temp->data;
    S->top = S->top->next;
    free(temp);
    return val;
}

