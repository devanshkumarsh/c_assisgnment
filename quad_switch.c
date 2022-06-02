#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2;
	printf("enter the number:");
	scanf("%f",&a);
	printf("enter the number:");
	scanf("%f",&b);
	printf("enter the number:");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	switch (d>0)
	{
		case 1:
			root1=(-b-d)/2*a;
			root2=(-b+d)/2*a;
			printf("the roots are %f , %f",root1,root2);
			break;
		case 0:
			printf("this is imaginory roots");
			break;
			
	}
	return 0;
}
