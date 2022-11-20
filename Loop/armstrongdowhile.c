//Armstrong do while

#include<stdio.h>
void main()
{
	int n,rem,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	do
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	while(temp);
		if(sum==n)
			printf("%d is an Armstrong number",n);
		else
			printf("%d is not an Armstrong number",n);
}