//positive odd and negative even sum do while

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
			sum=sum-i;
		else
			sum=sum+i;
		i++;
	}while(i<=n);
	printf("%d",sum);
}