// Write C program to perform addition of two numbers using pointers

void addition(int *a,int *b);
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter value of 1st no. :-\n");
    scanf("%d",&a);
    printf("Enter value of 2nd no. :-\n");
    scanf("%d",&b);
    addition(&a,&b);
}

void addition(int *a,int *b){
    int sum = 0;
    sum = *a + *b;
    printf("Addition is %d\n",sum);
}