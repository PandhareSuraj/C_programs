//Implement the C program to accept n integers to be sorted. Main function creates child process using fork system call.Parent process sorts the integers using bubblesort and waits for child process using wait system call. Child process sorts the integers using insertion sort.

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pid = fork();

    if (pid == 0) {
        // Child process
         sleep(2); 
        printf("\nChild Process (PID %d):\n", getpid());
        insertionSort(arr, n);
        printf("Array sorted using Insertion Sort:\n");
        printArray(arr, n);
 
    }
    else {
        // Parent process
        printf("\nParent Process (PID %d): Waiting for child to finish...\n", getpid());
        wait(NULL);
        sleep(2);
        printf("Child finished. Now Parent sorting.\n");
        bubbleSort(arr, n);
        printf("Array sorted using Bubble Sort:\n");
        printArray(arr, n);
    }

    return 0;
}

