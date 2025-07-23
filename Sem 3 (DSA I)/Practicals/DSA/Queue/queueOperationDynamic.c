// Implement a linear queue library of integers using a dynamic implementation of the queue and implementing the init(Q) , enqueue(Q) , and dequeue(Q) operations. Write a program that includes the queue library and calls different queue operations.

#include "queue_library_dynamic.h"
#include <stdio.h>
#include <stdlib.h>

void main(){
    Queue Q;

    init(&Q);

    enqueue(&Q, 10);
    enqueue(&Q, 20);
    enqueue(&Q, 30);

    printf("first dequeue %d\n",dequeue(&Q));
    printf("second dequeue %d\n",dequeue(&Q));
    printf("third dequeue %d\n",dequeue(&Q));
    printf("fourth dequeue %d\n",dequeue(&Q));

}