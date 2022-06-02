/*Q 15. Write a program to calculate the frequency (f) of a given wave with wavelength (?) and speed (c), where c=?*f.*/
#include<stdio.h>
int main()
{
	int w,c;
	float f;
	printf("enter the wavelength :");
	scanf("%d",&w);
	printf("enter the speed :");
	scanf("%d",&c);
	f=c/w;
	printf("the frequency is:%.2f",f);
	return 0;
	
}
