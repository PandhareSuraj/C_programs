// Write C program to input element in an array and reverse the array using pointer (used dynamic memory alloction)

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a,n,i;

    printf("Enter how many elements\n");
    scanf("%d",&n);

    a = (int*) malloc (n*sizeof(int));

    printf("Enter Array Elements :-\n");
    for(i = 0;i<n;i++){
        scanf("%d",a+i);
    }

    printf("Reversed Array Elements:-\n");
    for(i = n-1;i>=0;i--){
        printf("%d\n",*(a+i));
    }
}