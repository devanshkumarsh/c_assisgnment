#include<string.h>
#include<stdio.h>
int main()
{ 
	int i,j;
	char ar[20],ar1[20];
	scanf("%[^\n]",ar);
	for (i=0;ar[i];i++){
		ar1[i]=ar[i];
	}
	ar1[i]=0;
	printf("%s",ar1);
}
