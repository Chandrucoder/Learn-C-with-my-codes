//multiples of unit digit while

#include<stdio.h>
void main()
{
	int i,val,unitdigit,n;
	scanf("%d",&n);
	unitdigit=n%10;
	if(unitdigit==0)
		val=10;
	else
		val=unitdigit;
	i=val;
	while(i<=n)
	{
		printf("%d \n",i);
		i=i+val;
	}
}