//Armstrong number for loop

#include<stdio.h>
void main()
{
	int n,temp,rem,sum=0;
	scanf("%d",&n);
	for(temp=n;temp!=0;)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==n)
		printf("%d is an armstrong number",n);
	else
		printf("%d is not an armstrong number",n);
}