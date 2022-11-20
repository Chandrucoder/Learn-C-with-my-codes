//previous k integers
#include<stdio.h>
void main()
{
	int n,k,diff;
	scanf("%d%d",&n,&k);
	diff=n-k;
	do
	{
		printf("%d \n",diff);
		diff++;	
	}while(diff<=n);
}