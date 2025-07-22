//program to accept character and display its next and previous character

#include<stdio.h>
int main(){
    char ch;

    printf("Enter any character : ");
    scanf("%c",&ch);

    printf("Next character is => %c\n",ch+1);
    printf("Previous character is => %c\n",ch-1);

    return 0;
}