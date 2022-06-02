//2.WAP to input a 2D array of size M*N and find the sum and average of all the elements.
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter the size of row :");
	scanf("%d",&m);
	printf("enter the size of column:");
	scanf("%d",&n);
	int arr[m][n],sum=0;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
		sum=sum+arr[i][j];
		}
		}
		printf("The sum of all the element:%d\n",sum);
	}
	
