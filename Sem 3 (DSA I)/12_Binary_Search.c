#include<stdio.h>
void main(){
    int n,i,ele;
    int first,last,middle;
    int a[10];

    printf("Enter no. of array elements you want to have :- \n");
    scanf("%d",&n);

    printf("Enter array elements :- \n");
    for(i = 0 ; i<n ;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter element you want to search in the array :- \n");
    scanf("%d",&ele);

    first = a[0];
    last = a[n-1];
    middle = first+last/2;

    while(first<=last){
        if(a[middle]<ele){
            first = middle+1;
            
        }
        else if(a[middle]==ele){
            printf("Element found at %d index .",middle);
            break;
        }
        else{
            last = middle - 1;
        }

        middle = first+last/2;
    }


}