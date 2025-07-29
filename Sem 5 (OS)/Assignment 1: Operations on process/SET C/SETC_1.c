#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pid = fork();

    if (pid == 0) {
        // Child process
        printf("\n[Child] Sorting in Ascending Order...\n");
        sortAscending(arr, n);  // Fixed the typo
        printf("[Child] Array in Ascending Order: ");
        displayArray(arr, n);
    } else if (pid > 0) {


        int status;
        wait(&status);
        printf("\n Parent process.\n");
        if (WIFEXITED(status)) {
            printf("Child process exit.\n");
        }

        printf("[Parent] Sorting in Descending Order...\n");
        sortDescending(arr, n);
        printf("[Parent] Array in Descending Order: ");
        displayArray(arr, n);
    } else {
        printf("Fork failed.\n");
    }

    return 0;
}

