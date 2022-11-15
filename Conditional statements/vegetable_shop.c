//vegetable shop

#include<stdio.h>
void main()
{
	int a,b,c,d,vegetables_price,total;
	printf("Enter values of 4 types of coins and vegetable price:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&vegetables_price);
	total=a+b*2+c*5+d*10;
	if(total==vegetables_price)
	{
		printf("Paid");
	}
	else if(total>vegetables_price)
	{
		printf("Paid and remaining %d",total-vegetables_price);
	}
	else
	{
		printf("Not paid and you have %d",total);
	}
}