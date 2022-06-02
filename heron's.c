#include<stdio.h>
int main()
{
	int a,b,c;
	float s,d;
	printf("enter the first digit:");
	scanf("%d",&a);
	printf("enter the second digit:");
	scanf("%d",&b);
	printf("enter the third digit:");
	scanf("%d",&c);
	s=(a+b+c)/2.0;
	printf("the value of s is %f\n",s);
	d=(s*((s-a)*(s-b)*(s-c)))*0.5;
	printf("the answer is %f",d);
	return 0;
	
	

}
