//product of x and sum of digits do while

#include<stdio.h>
void main()
{
	int n,x,temp,sum=0,rem;
	scanf("%d%d",&n,&x);
	temp=n;
	do
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;	
	}while(temp);
	printf("%d",sum*x);
	
}