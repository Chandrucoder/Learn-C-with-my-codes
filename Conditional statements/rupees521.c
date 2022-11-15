//count Rs 5, 2, and 1

#include<stdio.h>
void main()
{
	int amount,fiverupees,otherrupees,tworupees,onerupees;
	scanf("%d",&amount);
	fiverupees=amount/5;
	otherrupees=amount%5;
	tworupees=otherrupees/2;
	onerupees=otherrupees%2;
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

