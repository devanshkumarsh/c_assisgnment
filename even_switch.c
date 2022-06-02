#include<stdio.h>
int main()
{
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	switch(a%2==0)
	{
		case 1:
			printf("this is even");
			break;
		case 0:
			printf("this is odd");
			break;
	}
	return 0;
}
