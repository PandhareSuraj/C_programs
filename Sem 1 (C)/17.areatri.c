//program to find area of triangle

#include<stdio.h>
int main(){
    float b,h,area;

    printf("Enter values of Base and Height : ");
    scanf("%f%f",&b,&h);

    area=0.5*(b*h);
    printf("Area of Triangle is : %f \n",area);

    return 0;
}