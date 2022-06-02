//4.WAP to input a 2D array of size M*N and display boundary elements in matrix form.
#include<Stdio.h>
int main()
{int n;
scanf("%d",&n);
int arr[n][n],i,j;
for (i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&arr[i][j]);
	}
}
for (i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i==0||i==n-1||j==0||j==n-1){
			printf("%d",arr[i][j]);
		}
		else{
			printf(" ");
		}
		if(j==n-1){
			printf("\n");
		}
	}
}

}

