// Write C program accept 10 number from user and display it (use malloc)

#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,*a;

    a = (int*) malloc(10*sizeof(int));

    printf("Enter 10 numbers :-\n");
    for(i=1;i<=10;i++){
        scanf("%d",a+i);
    }
    printf("Entered 10 numbers are :-\n");
    for(i=1;i<=10;i++){
        printf("%d\n",*(a+i));
    }

    free(a);
}