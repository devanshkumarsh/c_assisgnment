//8.WAP to input 2 matrices from the user and add them.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n][n],i,j,k,l,ar1[n][n],sum[n][n];
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%d",&ar1[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			sum[i][j]=arr[i][j]+ar1[i][j];
			printf("%d ",sum[i][j]);
			
		}
		printf("\n");
		
		
	}
}
