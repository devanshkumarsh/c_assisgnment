#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the number:");
	scanf("%d",&a);
	b=a%10;
	printf("the last digit of the number is %d\n",b);
	while (a>10)
	{
		a=a/10;
		printf("the first digit of the number is %d",a);
	}
	return 0;
}
