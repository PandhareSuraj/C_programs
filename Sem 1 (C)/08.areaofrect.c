//program to display of area of rectangle

#include<stdio.h>
int main(){

    int a,l,b;

    printf("Enter values of length and breath : \n");
    scanf("%d%d",&l,&b);

    a=l*b;
    printf("Area of rectangle is : %d\n",a);

    return 0;
}