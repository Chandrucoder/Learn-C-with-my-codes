//perfect numbers for loop

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
			{
				sum=sum+i;
			}
	}
	if(sum==n)
		printf("%d is perfect",n);
	else
		printf("%d is not perfect",n);
}