//program to convert cm into m and k

#include<stdio.h>
int main(){
    float cm,km,m;

    printf("Enter value in cm : ");
    scanf("%f",&cm);

    //for meter
    m=cm/100;
    printf("Meter : %f\n",m);

    //for kilometer
    km=cm/100000;
    printf("Kilometer : %f\n",km);

    return 0;
}