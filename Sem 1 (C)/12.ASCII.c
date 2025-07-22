//program to accept character and display its ASCII value

#include<stdio.h>
int main(){

    char ch;

    printf("Enter any character : ");
    scanf("%c",&ch);

    printf("The ASCII value of given character is : %d\n",ch);

    return 0;
}