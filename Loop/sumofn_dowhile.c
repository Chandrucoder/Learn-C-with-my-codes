//sum of n numbers do while

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	i=1;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=n);
	printf("%d \n",sum);

}