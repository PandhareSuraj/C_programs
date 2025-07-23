// Write a Menu Driven Program to Perform following string operations using stdlib functions
// 1) Length 
// 2) Copy
// 3) Concatinate
// 4) Compair
// 5) Reverse
// 6) Uppercase
// 7) Lowercase

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    int ch,i;
    char str[20],str1[20];

    printf("******Menu******\n");
    printf("1) Length \n2) Copy \n3) Concatinate \n4) Compair \n5) Reverse \n6) Uppercase \n7) Lowercase\n\n");
    printf("Enter Your Choice :- \n");
    scanf("%d",&ch);

    switch(ch){
        case 1 : 
        printf("\nEnter String to Find Length :-\n");
        scanf("%s",str);
        printf("String Length is : %d",strlen(str));
        break;

        case 2 :
        printf("\nEnter String to Copy it into another string :-\n");
        scanf("%s",str);
        strcpy(str1,str);
        printf("\nEntered String :- %s\nCopied String :- %s",str,str1);
        break;

        case 3 : 
        printf("\nEnter 1st String :- \n");
        scanf("%s",str);
        printf("Enter 2nd String :- \n");
        scanf("%s",str1);
        printf("Concatinated String :- %d",strcat(str,str1));
        break;

        case 4 :
        printf("\nEnter 1st String :- \n");
        scanf("%s",str);
        printf("Enter 2nd String :- \n");
        scanf("%s",str1);
        if(strcmp(str,str1)==0){
            printf("Both Strings are Same!\n");
        }else{
            printf("Both Strings are Different!\n");
        }
        break;

        case 5 : 
        printf("\nEnter String to Reverse it :- \n");
        scanf("%s",str);
        printf("Reversed String :- \n");
        for(i=strlen(str);i>=0;i--){
            printf("%c",str[i]);
        }
        break;

        case 6 :
        printf("\nEnter to Uppercase it :- \n");
        scanf("%s",str);
        strupr(str);
        printf("Uppercased String :- \n");
        printf("%s",str);
        break;

        case 7 :
        printf("\nEnter to Lowercase it :- \n");
        scanf("%s",str);
        strlwr(str);
        printf("Lowercased String :- \n");
        printf("%s",str);
    }
}