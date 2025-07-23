# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct Queue{
    Node *front;
    Node *rear;
}Queue;

void init(Queue *Q){
    Q->front = NULL;
    Q->rear = NULL;
}

bool isEmpty(Queue *q) {
    return q->front == NULL;
}

void enqueue(Queue *q, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = value;
    newNode->next = NULL;
    
    // If the queue is empty, both front and rear point to the new node
    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;  // Link the new node to the last node
        q->rear = newNode;  // Update the rear pointer to the new node
    }
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to dequeue.\n");
        return -1; 
    }

    Node *temp = q->front;
    int dequeuedValue = temp->data;

    q->front = q->front->next;  // Move front to the next node

    // If the front becomes NULL, the queue is empty, so update rear to NULL
    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return dequeuedValue;
}