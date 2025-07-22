//program to check given no. is divisible by 5 or divisible by 8

#include<stdio.h>
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%5==0 || n%8==0)
    {
        if(n%5==0)
        {
            printf("%d is divisible by 5\n",n);
        }

        else if(n%8==0)
        {
            printf("%d is divisible by 8\n",n);
        }
    }

    return 0;
}