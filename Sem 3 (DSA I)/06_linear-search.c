#include<stdio.h>
int linear_search(int a[],int n,int ele);
void main(){
    int n , i , ele , position;
    int a[10];

    printf("Enter how many elements you want to enter in the array :- \n");
    scanf("%d",&n);

    printf("Enter %d elements :- \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search in the array :- \n");
    scanf("%d",&ele);

    position = linear_search(a,n,ele);

    if(position==-1){
        printf("%d is not present in the array !",ele);
    }
    else{
        printf("%d is present in the array at location %d\n",ele,position+1);
    }
}

int linear_search(int a[],int n,int ele){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==ele){
            return i;
        }
    }
    return -1;
}