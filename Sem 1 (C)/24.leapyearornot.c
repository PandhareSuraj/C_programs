//program to check given year is leap year or not

#include<stdio.h>
int main(){
    int y;

    printf("Enter year : ");
    scanf("%d",&y);

    if(y%4==0)
    {
        printf("%d is a leap year\n",y);
    }

    else
    {
        printf("%d is not an leap year\n",y);
    }

    return 0;
}