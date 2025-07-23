// Write C program to sort array using pointer

#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a;
    int num,i,j,temp;

    printf("Enter how many numbers:-\n");
    scanf("%d",&num);

    a = (int*) malloc (num*sizeof(int));

    printf("Enter array elements:-\n");
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    // printf("Array elements are:-\n");
    // for(i=0;i<num;i++){
    //     printf("%d\n",a[i]);
    // }

    for (j = 0; j < num; j++)
    {
        for(i=j+1;i<num;i++){
            if(a[j]>a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Sorted Array Elements:-\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n",a[i]);
    }

    free(a);
}