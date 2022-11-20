//armstrong number while

#include<stdio.h>
void main()
{
	int i,n,temp,rem,sum=0;
	scanf("%d",&n);
	i=1;
	temp=n;
	while(temp)
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