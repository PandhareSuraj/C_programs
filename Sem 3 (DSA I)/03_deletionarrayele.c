#include<stdio.h>
int main(){
    int n ,i , index , a[100];

    printf("Enter no. of elements you want in an array :- \n");
    scanf("%d",&n);

    printf("Enter %d elements :- \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter index of element which you want to delete :- ");
    scanf("%d",&index);

    if(index < 0 || index > n - 1 ){
        printf("invalid index!");
        return 0;
    }
    else{
        for (i = index ; i < n - 1 ; i++)  
        {  
            a[i] = a[i+1]; 
        } 
        n--; 
    }

    printf("Array after deletion :- \n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}