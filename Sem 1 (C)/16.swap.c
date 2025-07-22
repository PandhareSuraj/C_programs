//program to swap two numbers 

#include<stdio.h>
int main(){
    int a,b;

    printf("Enter any two numbers :\n");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a => %d\n",a);
    printf("b => %d\n",b);

    return 0;
}