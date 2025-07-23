// Write C program , copy one string one into another

#include<stdio.h>
#include<string.h>
void main(){
    char str[20],str1[20];

    printf("Enter String to Copy it :- \n");
    scanf("%s",str);

    strcpy(str1,str);
    printf("Copied String :- \n%s",str1);
}