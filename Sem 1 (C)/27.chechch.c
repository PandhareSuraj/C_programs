//program to check given character is digit,alphabet or special character

#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;

    printf("Enter a character : ");
    scanf("%c",&ch);

    if(isdigit(ch))
    printf("%c is a digit\n",ch);

    else if(isalpha(ch))
    printf("%c is a alphabet\n",ch);

    else
    printf("%c is a special character\n",ch);

    return 0;
}