//program to make a simple calculator

#include<stdio.h>
int main(){
    int a,b,c,d;

    printf("ENTER two numbers : \n");
    scanf("%d%d",&a,&b);

    printf("\nEnter what operation you want to perform  \n\nAddition : 1\nSubstraction : 2\nDivision : 3\nMultiplication : 4\n");
    scanf("%d",&d);

    switch (d)
    {
    case 1 :
        c = a+b;
        printf("Addition is %d\n",c);
        break;
    
    case 2 :
        c = a-b;
        printf("Substraction is %d\n",c);
        break;

    case 3 :
        c = a/b;
        printf("Division is %d\n",c);
        break;    
    
    case 4 :
        c = a*b;
        printf("Multiplication is %d\n",c);
        break;

    default:

    printf("Invalid Operator !\ns");
        break;
    }

    return 0;
}