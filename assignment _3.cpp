#include<stdio.h>
int main()
{
	float total,a,m,p,t,sum,remains;
	printf("enter the total amount:");
	scanf("%f",&total);
	printf("enter the amount of apple:");
	scanf("%f",&a);
	printf("enter the amount of mango:");
	scanf("%f",&m);
	printf("enter the amount of potato:");
	scanf("%f",&p);
	printf("enter the amount of tomato:");
	scanf("%f",&t);
	sum=50*a+35*m+10*p+15*t;
	remains=total-sum;
	printf("the return amout is : %f",remains);
	return 0 ;
	
	
	
}
