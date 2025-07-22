//program to display average marks of five subjects

#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    int totalmarks;
    int avg;

    printf("Enter marks of Subjects : \n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    totalmarks = s1+s2+s3+s4+s5;
    avg=totalmarks/5;

    printf("Average five subjects is : %d \n",avg);

    return 0;
}