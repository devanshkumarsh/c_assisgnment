#include<stdio.h>
int arr(int(*ptr)[100],int k){
	int j,i;
	for (i=0;i<k;i++){
	for (j=0;j<k;j++){
	printf("%d ",ptr[i][j]);
}
printf("\n");
}
}
int main()
{
	int ar[100][100],n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	for (j=0;j<n;j++){
	scanf("%d",&ar[i][j]);
}
}
	arr(ar,n);
	
}

