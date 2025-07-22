// find maximum no. between given two numbers

#include<stdio.h>
int main(){
    int a,b;

    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("%d is max\n",a);
    }

    else
    {
        printf("%d is max\n",b);
    }

    return 0;
}