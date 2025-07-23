#include <stdio.h>
#include <stdlib.h>

void display();
void delete();
void search();

struct node {
    int info;
    struct node *link;
} *start = NULL;

int main() {
    struct node *q, *tmp;
    int i, j = 1, data;
    char ch;

    for (i = 0; i < j; i++) {
        tmp = (struct node *)malloc(sizeof(struct node));

        printf("Enter element :- ");
        scanf("%d", &data);

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

        printf("Do you want to enter more elements (y/n) :- ");
        scanf(" %c", &ch);

        if (ch == 'y' || ch == 'Y') {
            j++;
        }
    }

    display();
    delete();
    search();

    return 0;
}

void display() {
    struct node *q;
    if (start == NULL) {
        printf("List is empty!!\n");
    } else {
        printf("\n**** Elements in Linked List ****\n");
        q = start;
        while (q != NULL) {
            printf("%d\t", q->info);
            q = q->link;
        }
    }
}

void delete() {
    struct node *q, *tmp;
    int i, j = 1, k, data;
    char ch;

    for (i = 0; i < j; i++) {
        printf("\n\nEnter the element to be deleted :- \n");
        scanf("%d", &data);

        if (start != NULL && start->info == data) {
            tmp = start;
            start = start->link;
            free(tmp);
            display();
        } else {
            q = start;
            while (q != NULL && q->link != NULL) {
                k = 0;
                if (q->link->info == data) {
                    tmp = q->link;
                    q->link = tmp->link;
                    free(tmp);
                    k++;
                    break;
                }
                q = q->link;
            }

            if (k > 0) {
                display();
            } else {
                printf("\nElement you enter doesn't exist in linked list!\n");
            }
        }

        printf("\n\nDo you want to delete more elements (y/n) :- \n");
        scanf(" %c", &ch);

        if (ch == 'y' || ch == 'Y') {
            j++;
        }
    }
}

void search() {
    struct node *q;
    int ele, i, m;
    char ch;
    int j = 1;

    for (int k = 0; k < j; k++) {
        printf("\nEnter the element to be searched in linked list :- \n");
        scanf("%d", &ele);

        if (start == NULL) {
            printf("List is empty!!\n");
        } else {
            q = start;
            i = 0;
            m = 0;
            while (q != NULL) {
                if (q->info == ele) {
                    printf("\nElement present at %d th index !\n\n", i);
                    m++;
                    break;
                }
                q = q->link;
                i++;
            }
            if (m == 0) {
                printf("\nElement not found in the linked list!\n");
            }
        }

        printf("Do you want to search more elements (y/n) :- ");
        scanf(" %c", &ch);

        if (ch == 'y' || ch == 'Y') {
            j++;
        }
    }
}
