// Write C program to accept string from user and display it using array

#include<stdio.h>
void main(){
    char str[20];
    int i;

    printf("Enter a string\n");
    scanf("%s",str);

    printf("String is : \n");
    for(i = 0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }
}