//Amount paid by customer
#include<stdio.h>
void main()
{
	float x,y,z,temp,price;
	printf("Enter a price of three items:");
	scanf("%f%f%f",&x,&y,&z);
	if(x==y && x!=z && y!=z)
	{
		price=x+y;
		temp=price/10;
		price=(price-temp)+z;
		printf("Total value is %.2f",price);
	}
	else if(y==z && y!=x && z!=x)
	{
		price=y+z;
		temp=price/10;
		price=(price-temp)+x;
		printf("Total value is %.2f",price);
	}
	else if(x==z && x!=y && y!=z)
	{
		price=x+z;
		temp=price/10;
		price=(price-temp)+y;
		printf("Total value is %.2f",price);
	}
	else
	{
		price=x+y+z;
		printf("Total value is %.2f",price);
	}
}