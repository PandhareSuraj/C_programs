// Sort a random array of n integers (accept the value of n from the user) in ascending order using the bubble sort algorithm

#include<stdio.h>
void bubblesort(int a[],int n);
void main(){
    int n;

    printf("Enter how much size of array do you want :- \n");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d elements :- \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Unsorted array :- \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    bubblesort(a,n);

    printf("\nSorted array :- \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

void bubblesort(int a[],int n){
    int temp;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}