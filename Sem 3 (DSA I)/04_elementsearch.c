#include<stdio.h>
void main(){
    int a[100];
    int n,i,ele,temp=0;

    printf("Enter how many elements do you want to enter in an array :- \n");
    scanf("%d",&n);

    printf("Enter %d array elements :- \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter what element do you want to search in the array :- \n");
    scanf("%d",&ele);

    for(i=0;i<n;i++){
        if(a[i]==ele){
            temp = ele;
            break;
        }
    }

    if(temp==ele){
        printf("%d found at index : %d in the array !",ele,i);
    }
    else{
        printf("%d is not present in the array !",ele);
    }
}