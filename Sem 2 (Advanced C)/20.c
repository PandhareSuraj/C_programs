// Create file store info about person name , age , salary 

#include<stdio.h>
void main(){
    FILE *fp;
    char name[20];
    int age;
    float sal;
    fp = fopen("emp.txt","w");
    if(!fp){
        printf("File Record not found!");
    }else{
        printf("Enter Employee Name :- \n");
        scanf("%s",name);
        fprintf(fp,"Employee Name :- %s\n",name);
        printf("Enter Employee Age :- \n");
        scanf("%d",&age);
        fprintf(fp,"Employee Age :- %d\n",age);
        printf("Enter Employee Salary :- \n");
        scanf("%f",&sal);
        fprintf(fp,"Employee Salary :- %.2f",sal);
        fclose(fp);
    }
}