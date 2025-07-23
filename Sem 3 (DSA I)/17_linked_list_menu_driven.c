#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void display();
void insert();
void insertatstart();
void insertatspecificposition();

struct node {
   int info;
   struct node *link;
} *start = NULL;

void main() {
   int n;

   while(1) {
       printf("\n*************MENU*************\n\n1. To insert an element\n2. To insert element at start\n3. To insert element at specific position\n4. To exit\n");
       scanf("%d", &n);

       switch(n) {
           case 1: insert();
                   break;
           case 2: insertatstart();
                   break;
           case 3: insertatspecificposition();
                   break;
           case 4: exit(0);
                   break;
           default: printf("Wrong Choice!\n");
                   break;
       }
   }
}

void display() {
   struct node *q;
   if (start == NULL) {
       printf("List is empty!!\n");
   } else {
       printf("****Elements in Linked List****\n");
       q = start;
       while (q != NULL) {
           printf("%d\t", q->info);
           q = q->link;
       }
       printf("\n");
   }
}

void insertatstart() {
    int data;
    struct node *tmp;
    printf("Enter element: ");
    scanf("%d", &data);

    tmp = malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;

    display();
}

void insertatspecificposition() {
    int data, pos;
    struct node *tmp, *q;

    printf("Enter the position after which you want to insert the element: ");
    scanf("%d", &pos);

    printf("Enter element: ");
    scanf("%d", &data);

    tmp = malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;

    if (pos == 0) {
        tmp->link = start;
        start = tmp;
    } else {
        q = start;
        for (int i = 1; i < pos && q != NULL; i++) {
            q = q->link;
        }
        if (q != NULL) {
            tmp->link = q->link;
            q->link = tmp;
        } else {
            printf("Position out of bounds\n");
            free(tmp);
        }
    }
    display();
}

void insert() {
    int data;
    struct node *tmp, *q;
    printf("Enter element: ");
    scanf("%d", &data);

    tmp = malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;

    if (start == NULL) {
        start = tmp;
    } else {
        q = start;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = tmp;
    }
    display();
}
