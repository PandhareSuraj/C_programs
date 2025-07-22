//program to display area of circle


#include<stdio.h>
int main(){

    int a,r;

    printf("Enter Radius : \n");
    scanf("%d",&r);

    a=3.14*r*r;
    printf("Area of circle is : %d\n",a);

    return 0;
}