//program to display circumference of circle


#include<stdio.h>
int main(){
    int c,r;

    printf("Enter Value of radius : \n");
    scanf("%d",&r);

    c=2*3.14*r;
    printf("Circumference of circle is : %d\n",c);

    return 0;
}