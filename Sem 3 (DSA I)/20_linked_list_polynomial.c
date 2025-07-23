#include <stdio.h>
#include <stdlib.h>

struct node {
    int coefficient;
    int exponent;
    struct node *link;
} *start = NULL;

void display(struct node *start);

int main() {
    int n;
    struct node *tmp, *q;

    printf("Enter how many elements you want in the expression: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        tmp = malloc(sizeof(struct node));
        if (tmp == NULL) {
            printf("Memory allocation failed!\n");
            exit(1); 
        }

        printf("\nEnter coefficient for term %d: ", i + 1);
        scanf("%d", &tmp->coefficient);

        printf("Enter exponent for term %d: ", i + 1);
        scanf("%d", &tmp->exponent);

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

    printf("\nThe polynomial expression is:\n");
    display(start);

    return 0;
}

void display(struct node *start) {
    struct node *q;
    if (start == NULL) {
        printf("The polynomial is empty!\n");
    } else {
        q = start;
        while (q != NULL) {
            if (q->exponent == 0) {
                printf("%d", q->coefficient);
            } else if (q->exponent == 1) {
                printf("%dx", q->coefficient); 
            } else {
                printf("%dx^%d", q->coefficient, q->exponent); 
            }

            q = q->link;
            if (q != NULL) {
                printf(" + ");  
            }
        }
        printf("\n");
    }
}
