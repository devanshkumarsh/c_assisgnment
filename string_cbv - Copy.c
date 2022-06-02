#include<stdio.h>
#include<string.h>
int arr(char*ptr,int k){
	int i;
	for (i=0;i<k;i++)
	printf("%c",ptr[i]);
}
int main()
{
	char ar[100],n;
	scanf("%[^\n]",ar);
	n=strlen(ar);
	arr(ar,n);
	
}

