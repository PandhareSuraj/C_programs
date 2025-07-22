// program to check character is vowel or consonent

#include<stdio.h>
int main(){
    char ch,a,e,i,o,u;

    printf("Enter a character : ");
    scanf("%d",&ch);

    switch(ch)
    {
    
    case 1:
    ch=a;
    printf("Character is a vowel\n");

    case 2:
    ch=e;
    printf("Character is a vowel\n");

    case 3:
    ch=i;
    printf("Character is a vowel\n");

    case 4:
    ch=o;
    printf("Character is a vowel\n");

    case 5:
    ch=u;
    printf("Character is a vowel\n");

    default:
    printf("Character is a consonent\n");
    }

    return 0;
}