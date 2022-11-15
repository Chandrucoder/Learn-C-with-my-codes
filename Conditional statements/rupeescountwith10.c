//count Rs 5, 2, and 1

#include<stdio.h>
void main()
{
	int amount,fiverupees,otherrupees,tworupees,onerupees,tenrupees;
	printf("Enter an amount:");
	scanf("%d",&amount);
	tenrupees=amount/10;
	otherrupees=amount%10;
	fiverupees=otherrupees/5;
	tworupees=(otherrupees%5)/2;
	onerupees=(otherrupees%5)%2;
	if(tenrupees!=0)
	{
		printf("Count of 10rs %d\n",tenrupees);
	}
	if(fiverupees!=0)
	{
		printf("Count of 5rs %d\n",fiverupees);
	}
	if(tworupees!=0)
	{
		printf("Count of 2rs %d\n",tworupees);
	}
	if(onerupees!=0)
	{
		printf("Count of 1rs %d",onerupees);
	}
}

