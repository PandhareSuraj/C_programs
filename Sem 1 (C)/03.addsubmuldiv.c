//program to display addition,substraction,multiplication and division of any two numbers

#include<stdio.h>
int main(){

    int a,b,z;

    printf("Enter any two numbers :\n");
    scanf("%d%d",&a,&b);

    z=a+b;
    printf("Addition is : %d \n",z);

    z=a-b;
    printf("Substraction is : %d\n",z);

    z=a*b;
    printf("Multiplication is : %d\n",z);

    z=a/b;
    printf("Division is : %d\n",z);

    return 0;
}