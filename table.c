#include<stdio.h>
int main()
{
	int a,b=0,c=0;
	printf("enter the digit");
	scanf("%d",&a);
	while(b<10)
	{
			b=b+1;
		c=a*b;
	
		printf("%d*%d %d\n",a,b, c);
	}

	return 0;
}
