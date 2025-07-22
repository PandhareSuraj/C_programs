//program to find simple interest

#include<stdio.h>
int main(){

    int s;
    int p,r,y;

    printf("Enter principle amount : ");
    scanf("%d",&p);

    printf("Enter rate of interest : ");
    scanf("%d",&r);

    printf("No. of years : ");
    scanf("%d",&y);

    s=(p*r*y)/100;
    printf("Simple Interest is : %d\n",s);

    return 0;
}