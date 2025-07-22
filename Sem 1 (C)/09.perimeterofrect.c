//program to display of perimeter of rectangle

#include<stdio.h>
int main(){

    int p,l,b;

    printf("Enter values of length and breadth : \n");
    scanf("%d%d",&l,&b);

    p=2*(l+b);
    printf("Perimeter of rectangle is : %d\n",p);

    return 0;
}