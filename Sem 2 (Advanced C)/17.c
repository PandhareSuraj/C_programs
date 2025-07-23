// Write a C program to accept n records of student rollno , name ,percentage . Display it in proper format .

#include<stdio.h>
struct stud {
    int rollno;
    char name[20];
    float percentage;
} s[20];

void main(){
    int i,n;

    printf("Enter how many records you want to enter :- \n");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
        printf("\nEnter Record No. %d\n",i);
        printf("\nEnter Student RollNo :- ");
        scanf("%d",&s[i].rollno);
        printf("Enter Student Name :- ");
        scanf("%s",s[i].name);
        printf("Enter Student Percentage :- ");
        scanf("%f",&s[i].percentage);
    }


    printf("\n\n*****Student Details*****\n");
    printf("-------------------------------------------");
    printf("\nRollNo \t\t Name \t\t Percentage \n");
    printf("-------------------------------------------\n");
    for(i = 1;i<=n;i++){
        printf("%d\t\t%s\t\t%.2f\n",s[i].rollno,s[i].name,s[i].percentage);
    }
}