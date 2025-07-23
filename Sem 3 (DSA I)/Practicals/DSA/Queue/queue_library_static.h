# include<stdio.h>
# include<stdbool.h>
# include<stdlib.h>

#define MAX 100 

typedef struct Queue
{
    int data[MAX];
    int front;
    int rear;
}Queue;

void init(Queue *Q){
    Q->front = -1;
    Q->rear = -1;
}

bool isEmpty(Queue *Q){
   return Q->front == -1;
}

bool isFull(Queue *Q){
    return Q->rear == MAX -1;
}

Queue enqueue(Queue Q, int value){
    if(isEmpty(&Q)){
     Q.data[++Q.rear] = value;
     Q.front++;
    return Q;     
    }
    if(isFull(&Q)){
        printf("Queue iQ full");
        return Q;
    }
    Q.data[++Q.rear] = value;
    return Q;
}

Queue dequeue(Queue Q){
    if(isEmpty(&Q)){
        printf("nothing to dequeue");
    }
    printf("dequeue element iQ %d\n",Q.data[Q.front]);
    Q.front++;
    return Q;

}
