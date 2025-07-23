// Read number from file and write even and odd number in separate file

#include<stdio.h>
void main(){
    FILE *fp,*fp1,*fp2;
    int number,i;

    printf("Enter Random Numbers\n");
    fp = fopen("Data.txt","w");
    for(i=0;i<10;i++){
        scanf("%d",&number);
        fprintf(fp,"%d ",number);
    }
    fclose(fp);

    fp = fopen("Data.txt","r");
    fp1 = fopen("Odd.txt","w");
    fp2 = fopen("Even.txt","w");

    while(fscanf(fp,"%d",&number)!=EOF){

        if(number%2==0){
            fprintf(fp2,"%d ",number);
        }else{
            fprintf(fp1,"%d ",number);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
}