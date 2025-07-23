//  Implement a linear queue library of integers using a static implementation of the queue and implementing the init(Q) , add(Q) , and peek(Q) operations. Write a program that includes the queue library and calls different queue operations

#include "queue_library_static.h"

int main() {
    Queue Q;

    init(&Q);

    Q = enqueue(Q,10);
    Q = enqueue(Q,20);
    Q = enqueue(Q,30);

    Q = dequeue(Q);
    Q = dequeue(Q);
    Q = dequeue(Q);
    

}