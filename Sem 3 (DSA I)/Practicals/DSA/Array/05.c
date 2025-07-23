// Sort a random array of n integers (accept the value of n from the user) in ascending order using the insertion sort algorithm

#include<stdio.h>
void insertionsort(int a[],int n);
void main(){
    int n;

    printf("Enter the size for the array :- \n");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d array elements :- \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before sorting :- \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    insertionsort(a,n);

    printf("\nArray after sorting :- \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

void insertionsort(int a[],int n){
    int key,i,j;

    for(i=1;i<n;i++){
        key = a[i];
        for(j=i-1;j>=0 && (key<a[j]);j--){
            a[j+1] = a[j]; 
        }
        a[j+1] = key;
    }   
}