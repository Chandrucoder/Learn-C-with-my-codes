//prime numbers do while

#include<stdio.h>
void main()
{
	int i,n,count=0;
	scanf("%d",&n);
	i=1;
	do
	{
		if(n%i==0)
			count++;
		i++;
	}while(i<=n);
	if(count==2)
		printf("%d is prime numbers",n);
	else
		printf("%d is not a prime numbers",n);
}