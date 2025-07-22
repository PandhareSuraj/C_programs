//progrram to check if given no is negative 

#include<stdio.h>
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if (n<0)
    {
        printf("Given No is Negetive\n");
    }    

    else 
    {
        printf("No is not negative \n");
    }

    return 0;

}