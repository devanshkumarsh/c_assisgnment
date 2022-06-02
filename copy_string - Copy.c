//2.Write a C program to copy one string to another string with and without function.
/*
#include<stdio.h>
int main(){
	int i;
	char a[100],b[100];
	scanf("%[^\n]",a);
	for (i=0;a[i];i++){
		b[i]=a[i];
	}
	b[i]=0;
	printf("%s",b);
}
*/
#include<stdio.h>
int main(){
	char a[20],b[20];
	scanf("%[^\n]",a);
	strcpy(b,a);
	printf("%s",b);
}

