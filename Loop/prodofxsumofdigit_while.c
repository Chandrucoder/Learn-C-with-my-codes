//product of x and sum of digits while

#include<stdio.h>
void main()
{
	int n,x,temp,sum=0,rem;
	scanf("%d%d",&n,&x);
	temp=n;
	while(temp)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;	
	}
	printf("%d",sum*x);
	
}