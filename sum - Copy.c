#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int a[n],count=0;
	printf("enter the element in array \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (int i=0;i<n;i++)
	{
	        count=count+a[i];
	}
	printf("%d",count);
}
