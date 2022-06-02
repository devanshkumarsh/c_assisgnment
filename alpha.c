#include<stdio.h>
int main()
{
	char a;
	printf("enter:");
	scanf("%c",&a);	
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("vowels");
	}
	else
	{
		printf("consonants");
	}
	return 0;
}
