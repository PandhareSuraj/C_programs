#include<stdio.h>
int main(){
    int size , a[10];
    int i , ele , index;

    printf("Enter no. of elements you want to enter :- \n");
    scanf("%d",&size);

    printf("Enter %d elements :- \n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Array before insertion :- \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
    
    printf("Enter which element to be inserted :- \n");
    scanf("%d",&ele);

    printf("Enter the index where you want element to be inserted :- \n");
    scanf("%d",&index);

    if(index<0 || index>size-1){
        printf("Invalid index");
        return 0;
    }
    else{
        for(i=size-1;i>=index;i--){
        a[i+1] = a[i];
        }
        size++;
        a[index] = ele;
    }

    printf("Array after insertion :- \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
}