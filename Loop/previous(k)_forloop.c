//previous k integers

#include<stdio.h>
void main()
{
	int diff,n,k;
	scanf("%d%d",&n,&k);
	for(diff=n-k;diff<=n;diff++)
		printf("%d \n",diff);
}