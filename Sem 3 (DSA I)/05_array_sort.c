#include <stdio.h>

void main() {
    int a[10];
    int i, j, n, temp;

    printf("Enter how many elements you want to enter in an array: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Entered array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    // Bubble sort to sort the array
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
