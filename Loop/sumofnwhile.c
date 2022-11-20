//sum of n numbers while

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;	
	}
	printf("%d \n",sum);

}