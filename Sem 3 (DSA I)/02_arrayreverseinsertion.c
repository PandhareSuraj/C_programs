#include<stdio.h>
void main(){
    int n ,i , a[100];

    printf("Enter no. of elements you want in an array :- \n");
    scanf("%d",&n);

    printf("Now entering elements in reverse order of the array :- \n");
    for(i = n-1 ; i >= 0 ; i--){
        scanf("%d",&a[i]);
    }

    printf("Displayig array in linear order :- \n");
    for(i = 0 ; i < n ; i++){
        printf("%d\n",a[i]);
    }
}