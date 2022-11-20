//unitdigit for loop

#include<stdio.h>
void main()
{
	int i,n,val,unitdigit;
	scanf("%d",&n);
	unitdigit=n%10;
	if(unitdigit==0)
		val=10;
	else
		val=unitdigit;
	for(i=val;i<=n;)
	{
		printf("%d \n",i);
		i=i+val;
	}
	
}