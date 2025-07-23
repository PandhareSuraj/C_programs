#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
} *start = NULL;

void display(struct node *start);
struct node *reverse(struct node *start);

int main() {
    int n, data;
    struct node *q, *tmp;

    printf("Enter how many nodes you want to make: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        tmp = malloc(sizeof(struct node));

        printf("\nEnter value for %dth node: \n", i + 1);
        scanf("%d", &tmp->info);

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
    }

    printf("\n\nEntered Linked List:\n");
    display(start);

    struct node *rev = reverse(start);

    printf("\nReversed Linked List:\n");
    display(rev);

    return 0;
}

void display(struct node *start) {
    struct node *q;
    if (start == NULL) {
        printf("List is empty!\n");
    } else {
        q = start;
        while (q != NULL) {
            printf("%d\t", q->info);
            q = q->link;
        }
        printf("\n");
    }
}

struct node *reverse(struct node *start) {
    struct node *prev = NULL;
    struct node *current = start;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    return prev;
}
