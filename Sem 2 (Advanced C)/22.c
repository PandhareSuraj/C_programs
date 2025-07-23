// Find No of character , word , line in file

#include<stdio.h>
#include<stdbool.h>
void main(){
    FILE *fp;
    char ch;
    int word = 1,chr=0,line=1;
    bool inword = false;
    fp = fopen("Para.txt","r");
    if(!fp){
        printf("File not found!");
    }else{
        while(fscanf(fp,"%c",&ch)!=EOF){
            if(ch!='\n' && ch!='\t' && ch!=' '){
            chr++;
            }
            if(ch=='\n'){
                line++;
            }
            if(ch=='\n' || ch=='\t' || ch==' '){
                     inword = false;
            }
            else if(inword==false){
                    word++;
                    inword = true;
                }   
            }
        }

        printf("No. of line %d\n",line);
        printf("No. of word %d\n",word);
        printf("No. of characters %d\n",chr);
}