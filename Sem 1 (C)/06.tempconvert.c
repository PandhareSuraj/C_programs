//program to conver tenperature

//for converting farenheit to celcius
#include<stdio.h>
int main(){
    int c,f;

    printf("Enter value of farenheit : ");
    scanf("%d",&f);

    c=(f-32)*5/9;
    printf("Celcius is : %d\n",c);

    return 0;
}

//for converting celcius to farenheit - f=c*(9/5)+32