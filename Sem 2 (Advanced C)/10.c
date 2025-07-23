// Write C program to check if given String is palindrome or not (use command line arguments)

// Note : This program won't run directly on vscode .
// You must do this in terminal 
// Step 1 : gcc filename.c
// Step 2 : ./a.out stringname (for linux) 
//          .\a.exe stringname (for windows)


#include <stdio.h>
#include <string.h>
void main(int argc, char *argv[]) {
    char str[20];
    strcpy(str, argv[1]);

    char rev[20];
    int i, k = 0;

    for (i = strlen(str) - 1; i >= 0; i--) {
        rev[k++] = str[i];
    }
    rev[k] = '\0';

    if (strcmp(str, rev) == 0) {
        printf("String is a Palindrome\n");
    } else {
        printf("String is not a Palindrome\n");
    }
}
