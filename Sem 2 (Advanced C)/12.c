// Write C program accpet two number using command line argument and perform it's addition

// Note : This program won't run directly on vscode .
// You must do this in terminal 
// Step 1 : gcc filename.c
// Step 2 : ./a.out stringname (for linux) 
//          .\a.exe stringname (for windows)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc , char *argv[]){
    int a,b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("Addition is %d",a+b);
}