// Write C program accept string from user and concatenate second string to it.

#include<stdio.h>
#include<string.h>
void main(){
    char str1[20],str2[20];

    printf("Enter 1st and 2nd String to Concatenate both :- \n");
    scanf("%s%s",str1,str2);

    printf("Concatenated String :- %s",strcat(str1,str2));
}