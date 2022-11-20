//previous k integers
#include<stdio.h>
void main()
{
	int n,k,diff;
	scanf("%d%d",&n,&k);
	diff=n-k;
	while(diff<=n)
	{
		printf("%d \n",diff);
		diff++;	
	}
}