#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if (a>0)
	{
		printf("a is positive ");	
	}
	if(a<0)
	{
		printf("a is negative ");
		
	}
	else
	{
		printf("a is zero");
	}
	return 0;
	
	
}
