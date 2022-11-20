//prime or even while

#include<stdio.h>
void main()
{
	int i,n,count=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			count++;
		i++;
	}
	if(count==2 || n%2==0)
		printf("Valid");
	else
		printf("Not valid");
}