#include<stdio.h>
int main()
{
    int s[50],n,temp,i,b,k;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter :");
        scanf("%d",&s[i]);
        
    }
    for ( b=0;b<n-1;b++){
    for ( k=0;k<n-1;k++)
    {
        if(s[k]>s[k+1]){
        temp=s[k];
        s[k]=s[k+1];
        s[k+1]=temp;}
    }
    }
    for (i=0;i<n;i++){
        printf("%d\t",s[i]);
    }
}
