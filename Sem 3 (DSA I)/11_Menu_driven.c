#include<stdio.h>
#include<string.h>

int insertion(int a[]){
	int n,i;

	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements :- \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nEntered Array Elements :- \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int reverse_insertion(int a[]){
	int n,i;

	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements in reverse order according to their index :- \n",n);
	for(i=n-1;i>=0;i--){
		scanf("%d",&a[i]);
	}

	printf("\nEntered Array Elements :- \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int deletion(int a[]){
	int n,i,ele,index;
	float b = 1.0;

	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements :- \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nEnter which element you want to delete in the array :- \n");
	scanf("%d",&ele);	

	for(i=0;i<n;i++){
		if(a[i]==ele){
			b = 1.1;
			index = i;
			printf("\nArray Before deletion of ELement : %d\n",ele);
				for(i=0;i<n;i++){
				printf("%d ",a[i]);
			}
			//Deletion
			for(i=index;i<n-1;i++){
				a[i]=a[i+1];
			}
			n--;
		}
		if(b==1.0){
			printf("%d element is not present in the array\n",ele);
		}
	}

	printf("\nArray After deletion of Element : %d\n",ele);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int searching(int a[]){
	int n,i,ele;
	
	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements :- \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nEnter which element you want to search in the array :- \n");
	scanf("%d",&ele);	

	for(i=0;i<n;i++){
		if(a[i]==ele){
			printf("\nElement %d is present at index %d\n",ele,i);
		}
	}
}

int ascsort(int a[]){
	int n,i,j,temp;
	
	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements :- \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	//Sorting
	for (i = 0; i < n ; i++) {
        	for (j = 0; j < n - i - 1; j++) {
           		if (a[j] > a[j + 1]) {
                		temp = a[j];
                		a[j] = a[j + 1];
                		a[j + 1] = temp;
           		 }
       		}
  	}

	printf("Sorted Array :- ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int descsort(int a[]){
	int n,i,j,temp;
	
	printf("Enter how many array elements you want to insert :- \n");
	scanf("%d",&n);

	printf("\nEnter %d array elements :- \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	//Sorting
	for (i = 0; i < n ; i++) {
        	for (j = 0; j < n - i - 1; j++) {
           		if (a[j] < a[j + 1]) {
                		temp = a[j];
                		a[j] = a[j + 1];
                		a[j + 1] = temp;
           		 }
       		}
  	}

	printf("Sorted Array :- ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

void sortstring(){
	char str[20];
	char temp;
	int n,i,j;

	printf("Enter a string to sort it :- \n");
	scanf("%s",&str);

	n = strlen(str);

	printf("\nString before sorting :- %s\n",str);

	for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }

	printf("String after sorting :- %s\n",str);
}

void main(){
	int key;
	int a[10];

	printf("\n------------------Menu-------------------\n\n");
	printf("1 : For Inserting Elements in the array\n2 : For Inserting Elements in array in Reverse Order\n3 : For Deleting an array element\n4 : For Searching a element in an array\n5 : For Sorting out the Array in ascending order\n6 : For Sorting out the Array in descending order\n7 : To sort a string\n\n");
	printf("Pls enter your choice according from above options :- \n");
	scanf("%d",&key);

	switch(key){
		case 1 : insertion(a);
			 break;

		case 2 : reverse_insertion(a);
			 break;

		case 3 : deletion(a);
			 break;

		case 4 : searching(a);
			 break;

		case 5 : ascsort(a);
			 break;

		case 6 : descsort(a);
			 break;

		case 7 : sortstring();
			 break;

	}
}
