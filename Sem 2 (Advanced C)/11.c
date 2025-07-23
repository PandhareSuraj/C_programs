//  Write C program to check whether both string are same or not , use strcmp

#include<stdio.h>
#include<string.h>
void main(){
    char str[20],str1[20];

    printf("Enter 1st String :-\n");
    scanf("%s",str);

    printf("Enter 2nd String :-\n");
    scanf("%s",str1);

    if(strcmp(str,str1)==0){
        printf("Both Strings are same!");
    }else{
        printf("Both Strings are different!");
    }
}