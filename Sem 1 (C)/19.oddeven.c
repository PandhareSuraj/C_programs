//program to check given no is odd or even

#include<stdio.h>
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("No is Even\n");
    }

    else
    {
        printf("No is Odd\n");
    }

    return 0;
}