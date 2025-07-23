#include<stdio.h>
void main(){
	int i , j ,n;

	printf("Enter no. of vertices you want to have in an matrix :- \n");
	scanf("%d",&n);
	
	int m[n][n];	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[i][j] = 0;
			if(i!=j){
				printf("Do you want to have an edge for the path V{%d}-->{%d} | (1/0):\n",i+1,j+1);
				scanf("%d",&m[i][j]);
			}
		}
	}

	printf("Your Graph is :- \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}