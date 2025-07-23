// Write C program showing dereferencing of a pointer

#include<stdio.h>
void main(){
    int a = 10;
    int *ptr = &a;

    printf("Value of a is %d\n",a);
    printf("Address of a is %d\n",&a);
    printf("Value of ptr(address of a) is %d\n",ptr);
}