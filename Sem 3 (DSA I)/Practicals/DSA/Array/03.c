//  Create a random array of n integers. Accept a value x from the user and use the binary search algorithm to check whether the number is present in the array or not and output the position if the number is present.

#include<stdio.h>
int binarysearch(int a[],int n,int x);

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

    int loc = binarysearch(a,n,x);

    if(loc > -1){
        printf("Element position :- %d",loc);
    }

}

int binarysearch(int a[],int n,int x){
    int first = 0 , last = n-1 ;

    int mid ;

    while(first<=last){
        mid = (first + last) / 2 ;

        if(a[mid]<x){
            first = mid + 1;
        }
        else if(a[mid] == x) {
            return mid ;
        }
        else{
            last = mid - 1;
        }
    }
    
}