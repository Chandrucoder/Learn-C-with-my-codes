//product of x and sum of digits for loop

#include<stdio.h>

void main()
{
	int n,x,temp,sum=0,rem;
	scanf("%d%d",&n,&x);
	for(temp=n;temp!=0;)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("%d",sum*x);
}