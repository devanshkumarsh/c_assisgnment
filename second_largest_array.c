#include<stdio.h>
int main(){
    int s[50],n,temp;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter :");
        scanf("%d",&s[i]);
    }
    for (int b=0;b<n-1;b++){
    for (int k=0;k<n-1;k++){
        if(s[k]>s[k+1]){
        temp=s[k];
        s[k]=s[k+1];
        s[k+1]=temp;}
    }
    }
        printf("%d\t",s[n-2]);
}
