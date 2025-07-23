#include<stdio.h>
void selection_sort(int a[],int n);
void main(){
    int n,i;
    int a[20];

    printf("Enter how many elements do you want in an array :- \n");
    scanf("%d",&n);

    printf("Enter %d array elements :- \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    selection_sort(a,n);

    printf("Sorted array :- \n",n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void selection_sort(int a[], int n) {
    int temp, min_index, i, j;

    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j; 
            }
        }
        if (min_index != i) { 
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}