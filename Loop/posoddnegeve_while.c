//positive odd and negative even sum while

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
			sum=sum-i;
		else
			sum=sum+i;
		i++;
	}
	printf("%d",sum);
}