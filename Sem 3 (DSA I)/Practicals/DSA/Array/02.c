//  Create a random array of n integers. Accept a value x from the user and use the linear search algorithm to check whether the number is present in the array or not and output the position if the number is present.

#include<stdio.h>
int linearsearch(int a[],int n,int x);

void main(){
    int n;

    printf("Enter how much size you want in an array :- \n");
    scanf("%d",&n);

    int a[n],x;

    printf("Enter %d elements :- \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search in an array :- ");
    scanf("%d",&x);

    int loc = linearsearch(a,n,x);

    if(loc > -1){
        printf("Element position :- %d",loc);
    }

}

int linearsearch(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    printf("element not found in the array !");
    return -1;
}