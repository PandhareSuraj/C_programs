#include <stdio.h>
#include <stdlib.h>
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

void main() {
    int n,i,j;
    int a[20];

    printf("Enter how many array elements you want to enter :- \n");
    scanf("%d",&n);

    printf("Enter array elements :- \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("Sorted Array\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[high],temp,i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (a[j] < pivot) {
            i++;
            // swap
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    // swap
    temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}