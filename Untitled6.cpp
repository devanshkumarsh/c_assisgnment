//12.Write a C program to find reverse of a string with and without function.
#include<Stdio.h>
#include<string.h>
int main()
{
	int i,k,j=0;
	char a[]="garima",s[20];
	k=strlen(a);
	for(a[i]=k-1;a[i]>=0;k--) 
	{
		s[j]=a[i];
		j++;
		
	}
	printf("%s",s);
}
	




