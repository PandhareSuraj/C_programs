//  Sort a random array of n from the user) in n integers (accept the value of n from the user) in ascending order using the counting sort algorithm

#include <stdio.h>

void countingSort(int arr[], int n);

void main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void countingSort(int arr[], int n) {
    int max = arr[0], min = arr[0];

    // Find the maximum and minimum element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    int range = max - min + 1;
    int count[range];

    // Initialize the count array
    for (int i = 0; i < range; i++) {
        count[i] = 0;
    }

    // Store the count of each element in the count array
    for (int i = 0; i < n; i++) {
        count[arr[i] - min]++;
    }

    // Reconstruct the sorted array
    int k = 0;
    for (int i = 0; i < range; i++) {
        while (count[i]--) {
            arr[k++] = i + min;
        }
    }
}
