#include<stdio.h>
int insertion_sort(int a[],int n);
void main(){
    int n=5,i;
    int a[10];
    
    printf("Enter %d array elements :- \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Entered array :- \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    insertion_sort(a,n);

    printf("\nSorted Array :- \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}

int insertion_sort(int a[],int n){
	int i,j,temp;
	
	for(i=1;i<n;i++){
        int key = a[i];
        for(j=i-1;j>=0 && (key<a[j]);j--){
            a[j+1] = a[j];
        }
        a[j+1] = key;
	}
}