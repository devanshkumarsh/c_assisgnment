#include<stdio.h>
int main()
{
	int first,second,c,d;

	printf("enter the first year population");
	scanf("%d",&first);
	c=30000+((first*30000)/100);
	printf(" the increased population after the first year :%d",c);

	printf("enter the first year population");
	scanf("%d",&second);
	d=c+((second*c)/100);
	printf(" the increased population after the two year :%d",d);

	return 0;
} 
