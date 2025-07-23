#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *link;
} node;

node *start = NULL;

void create() {
    int data;
    char ch;
    node *q, *tmp;

    do {
        printf("Enter element: ");
        scanf("%d", &data);

        tmp = (node *)malloc(sizeof(node));
        
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
        printf("Do you want to enter more elements (y/n)? ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void display(node *start) {
    node *q;
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

void deletefunc() {
    node *q, *tmp;
    int data;
    char ch;

    do {
        if (start == NULL) {
            printf("The list is empty, no elements to delete.\n");
            return;
        }

        printf("Enter the element to be deleted: ");
        scanf("%d", &data);

        if (start->info == data) {
            tmp = start;
            start = start->link;
            free(tmp);
            printf("Element deleted successfully.\n");
            display(start);
        } else {
            int found = 0;
            q = start;
            while (q->link != NULL) {
                if (q->link->info == data) {
                    tmp = q->link;
                    q->link = tmp->link;
                    free(tmp);
                    found = 1;
                    break;
                }
                q = q->link;
            }

            if (found) {
                printf("Element deleted successfully.\n");
                display(start);
            } else {
                printf("Element not found in the linked list.\n");
            }
        }

        printf("Do you want to delete more elements (y/n)? ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

void insertatstart() {
    int data;
    node *tmp;

    printf("Enter element: ");
    scanf("%d", &data);

    tmp = (node *)malloc(sizeof(node));

    tmp->info = data;
    tmp->link = start;
    start = tmp;

    printf("Element inserted successfully at the start.\n");
}

void search() {
    node *q;
    int ele, index, found;
    char ch;

    do {
        printf("Enter the element to search in the linked list: ");
        scanf("%d", &ele);

        if (start == NULL) {
            printf("List is empty!\n");
        } else {
            q = start;
            index = 0;
            found = 0;
            while (q != NULL) {
                if (q->info == ele) {
                    printf("Element found at index %d.\n", index);
                    found = 1;
                    break;
                }
                q = q->link;
                index++;
            }
            if (!found) {
                printf("Element not found in the linked list.\n");
            }
        }

        printf("Do you want to search for more elements (y/n)? ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
}

node *reverse(node *start) {
    node *prev = NULL, *current = start, *next = NULL;

    while (current != NULL) {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    return prev;
}
