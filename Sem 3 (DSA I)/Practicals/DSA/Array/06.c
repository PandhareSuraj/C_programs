//  Sort a random array of n from the user) in n integers (accept the value of n from the user) in ascending order using the quick sort algorithm

#include <stdio.h>

void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);

void main() {
    int n;

    printf("Enter no of array elements you want :- \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d array elements :- \n",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } 

    quickSort(arr, 0, n - 1);

    printf("Sorted Array :- \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int index = partition(arr, low, high);
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(&arr[++i], &arr[j]);
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
