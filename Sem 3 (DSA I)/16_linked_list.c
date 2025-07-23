#include<stdio.h>
#include<stdlib.h>

struct node {
   int info;
   struct node *link;
} *start = NULL;

void main() {
   int data;
   int j = 1;
   char ch;
   struct node *q, *tmp;

   for (int i = 0; i < j; i++) {
       printf("Enter element: ");
       scanf("%d", &data);

       tmp = malloc(sizeof(struct node));
       tmp->info = data;
       tmp->link = NULL;

       if (start == NULL) {
        start = tmp;
       }
       else {
        q = start;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = tmp;
       }

       printf("Do you want to enter more elements (y/n)? ");
       scanf(" %c", &ch);  

       if (ch == 'y' || ch == 'Y') {
        j++;
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
   }
}
