//program to check if given no is +ve , -ve or zero

#include<stdio.h>
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Number is positive \n");
    }

    else if(n<0)
    {
        printf("Number is negative \n");
    }

    else
    {
        printf("Number is Zero\n");
    }

    return 0;
}