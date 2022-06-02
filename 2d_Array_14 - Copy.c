//14.WAP to input a matrix and print its upper triangular matrix.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n][n],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i==0||i==j||j==2){
				printf(" %d ",arr[i][j]);
			}
			else{
				printf("0");
			}
		}
		printf(" \n");
	}
	return 0;
}






