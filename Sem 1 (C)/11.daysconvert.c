//program to convert days into year,month and week

#include<stdio.h>
int main(){
    int y,m,w,d;

    printf("Enter no. of days : ");
    scanf("%d",&d);

    y=d/365;
    printf("Given Days into Years : %d\n",y);

    m=d/30;
    printf("Given Days into Months : %d\n",m);
    
    w=d/7;
    printf("Given Days into Weeks : %d\n",w);

    return 0;

}