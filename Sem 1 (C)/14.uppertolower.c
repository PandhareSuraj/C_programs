//program to accept an uppercase character and display it in lowercase

#include<stdio.h>
int main(){
    char ch;

    printf("Enter the character in uppercase : ");
    scanf("%c",&ch);

    printf("The Same Character in Lowercase : %c \n",ch+32);

    return 0;
}