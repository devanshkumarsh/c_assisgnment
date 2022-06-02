#include<stdio.h>
#include<math.h>
int main()
{
	float x2,x1,y2,y1,AOI,slope;
	printf("enter the value of x1,x2,y1,y2:");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	slope=(y2-y1)/(x2-x1);
	AOI=atan(slope);
	printf("the slope is :%0.2f",slope);
	printf("the angle of inclination is: %f",AOI);
	return 0;
}
