//  Write program accept string from user and reverse it . (Use Command Line Argument)

// Note : This program won't run directly on vscode .
// You must do this in terminal 
// Step 1 : gcc filename.c
// Step 2 : ./a.out stringname (for linux) 
//          .\a.exe stringname (for windows)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(int argc , char *argv[]){
    char str[20];
    int i;

    strcpy(str,argv[1]);

    printf("Original String :- %s\n",str);

    printf("Reversed String :- ");
    for(i = strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }

}