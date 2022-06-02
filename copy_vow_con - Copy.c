//9.WAP to input a string and copy all the vowels , consonants , digits and special characters in 4 different strings then display those 4 strings. 
#include<stdio.h>
int main()
{
	int i;
	char a[]="aeioug23";
	char vow[20],con[20],dg[20],sc[20];
	for(i=0;a[i];i++) 
	{
	if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	   {
		vow[i]=a[i];
	   }
		
	else if (a[i]>='0' && a[i]<='9')
		{
			dg[i]=a[i];
		}
	else if (a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u')
	{
		 con[i]=a[i];
	}
	
	}
	printf("%s\n",vow);
	printf("%s\n",dg);
	printf("%s\n",con);

	
}
