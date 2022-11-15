//Amount paid by customer(method-2)

#include<stdio.h>
void main()
{
	int x,y,z;
	double discount;
	printf("Enter amount:");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y && y==z && z==x)
	{
		discount=0;
	}
	else if(x==y)
	{
		discount=2*(x/10);
	}
	else if(y==z)
	{
		discount=2*(y/10);
	}
	else if(z==x)
	{
		discount=2*(z/10);
	}
	else
	{
		discount=0;
	}
	printf("The total price is %.2lf",(x+y+z)-discount);
}