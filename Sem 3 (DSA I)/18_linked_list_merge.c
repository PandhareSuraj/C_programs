#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

void create(int A[], int n, struct node **start);
void display(struct node *start);
struct node* merge(struct node* first, struct node* second);

int main() {
    int a1[] = {1, 3, 5, 6};
    int a2[] = {2, 4, 8, 9};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);

    struct node *first = NULL, *second = NULL;

    create(a1, n1, &first);
    create(a2, n2, &second);

    printf("First linked list: ");
    display(first);

    printf("Second linked list: ");
    display(second);

    struct node *mergedList = merge(first, second);

    printf("Merged linked list: ");
    display(mergedList);

    return 0;
}

void create(int A[], int n, struct node **start) {
    struct node *temp, *last;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = A[0];
    temp->link = NULL;
    *start = temp;
    last = temp;

    for (int i = 1; i < n; i++) {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = A[i];
        temp->link = NULL;
        last->link = temp;
        last = temp;
    }
}

void display(struct node *start) {
    struct node *temp = start;
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

struct node* merge(struct node* first, struct node* second) {
    struct node *result = NULL;

    if (first == NULL)
        return second;
    if (second == NULL)
        return first;

    if (first->info <= second->info) {
        result = first;
        result->link = merge(first->link, second);
    } else {
        result = second;
        result->link = merge(first, second->link);
    }

    return result;
}
