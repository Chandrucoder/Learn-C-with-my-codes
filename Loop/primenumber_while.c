//prime number while loop

#include<stdio.h>
void main()
{
	int i,n,count=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;	
	}
	if (count==2)
	{
		printf("%d is prime number",n);
	}
	else
		printf("%d is not a prime number",n);
}