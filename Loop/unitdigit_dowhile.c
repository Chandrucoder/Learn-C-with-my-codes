//multiples of unit digit do while

#include<stdio.h>
void main()
{
	int i,n,unitdigit,val;
	scanf("%d",&n);
	unitdigit=n%10;
	if(unitdigit==0)
		val=10;
	else
		val=unitdigit;
	i=val;
	do
	{
		printf("%d \n",i);
		i=i+val;	
	}while(i<=n);
}