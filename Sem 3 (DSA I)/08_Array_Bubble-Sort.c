#include<stdio.h>
void main(){
	int n,i,j,temp;
	int a[20];

	printf("Enter how many elements of array you want :- \n");
	scanf("%d",&n);

	printf("Enter array elements :- \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("Array without being sorted :- \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	// Bubble Sort ascending
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("\n\nSorted Array :- Ascending\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	// Bubble Sort (descending)
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("\n\nSorted Array :- Descending\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
