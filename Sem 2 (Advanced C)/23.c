//  copy  one file into another

#include<stdio.h>
void main(){
    FILE *fp,*fp1;
    char ch;
    fp = fopen("Text.txt","r");
    fp1 = fopen("Text2.txt","w");
    while(fscanf(fp,"%c",&ch)!=EOF){
        fprintf(fp1,"%c",ch);
    }
}