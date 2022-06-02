#include<stdio.h>
int main()
{
	int rate,price,sales_tax,price_of_product;
	printf("enter the rate of tax:");
	scanf("%d",&rate);
	printf("enter the price:");
	scanf("%d",&price);
	sales_tax=rate*(price/100);
	printf("%d\n",sales_tax);
	price_of_product=sales_tax+price;
	printf("%d",price_of_product);
	return 0;
	
	
}
