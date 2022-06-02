#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int a[n],even=0,odd=0;
	printf("enter the element in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
	      if (a[i]%2==0){
	         even++; 
	      }
	      else {
	       odd++;
	      }
	}
	printf("%d\n",even);
	printf("%d",odd);
}
