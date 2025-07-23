// Write C program to find maximum and minimum value between two numbers using pointer

void maxnum(int *a,int *b);
void minnum(int *a,int *b);
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter 1st number :-\n");
    scanf("%d",&a);
    printf("Enter 2nd number :-\n");
    scanf("%d",&b);
    maxnum(&a,&b);
    minnum(&a,&b);
}
void maxnum(int *a,int *b){
    if(*a<*b){
        printf("%d is maximum\n",*b);
    }else{
        printf("%d is maximum\n",*a);
    }
}
void minnum(int *a,int *b){
    if(*a<*b){
        printf("%d is minimum\n",*a);
    }else{
        printf("%d is minimum\n",*b);
    }
}