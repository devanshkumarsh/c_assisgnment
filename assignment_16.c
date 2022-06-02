/*Q 16. A car travelling at 30 m/s accelerates steadily at 5 m/s2 for a distance of 70 m. 
What is the final velocity of the car? [Hint: v2 = u2 + 2as]*/
#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,a,s,v1;
	printf("enter the initial speed of the car:");
	scanf("%f",&u);
	printf("enter the acceleration of the car:");
	scanf("%f",&a);
	printf("enter the distance of the car:");
	scanf("%f",&s);
	v=pow(u,2)+2*a*s;
	v1=sqrt(v);
	printf("the final speed of the car is %.2f",v1);	
}
