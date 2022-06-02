#include<stdio.h>
int main()
{
	int initial,first,second,c,remains,d;
	initial=30000;
	printf("enter your first year increased population: ");
	scanf("%d",&first);
	c=((first/100)*initial)+initial;
	printf("the population after the first year: %d\n",c);
	printf("enter your second year increased population:");
	scanf("%d",&second);
	remains=((second/100)*c)+c;
	printf("the population after two years: %d",remains);
	return 0; 
	
}
