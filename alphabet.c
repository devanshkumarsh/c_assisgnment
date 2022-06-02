#include<stdio.h>
int main()
{
	char a='a',n;
	printf("enter the number");
	scanf("%c",&n);
	while (n>=a)
	{
		printf("%c\n", a);
		++a;
	}
	return 0;	
}
