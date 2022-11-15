//Discount on book price
#include<stdio.h>
void main()
{
	int x,y,discount,price;
	printf("Enter no.of.books:");
	scanf("%d",&x);
	printf("Enter price of books:");
	scanf("%d",&y);
	price=x*y;
	if(x>=2 && x<=4)
	{
		discount=price/10;
	}
	else if(x==5)
	{
		discount=price*20/100;
	}
	else if(x>5)
	{
		discount=price*50/100;
	}
	else
	{
		discount=0;
	}
	printf("Total price of the books %d",price-discount);
}