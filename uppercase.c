#include<stdio.h>
int main()
{
	char a;
	printf("enter:");
	scanf("%c",&a);
	if (isupper(a))
	{
		printf("it is in uppercase %c",a);
		
	}
	else
	{
		printf("it is lowercase %c",a);
	}
	return 0;
	
}
