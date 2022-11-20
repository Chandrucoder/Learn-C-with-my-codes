//factorial dowhile

#include<stdio.h>
void main()
{
	int i,n,fact=1;
	scanf("%d",&n);
	i=1;
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	printf("%d \n",fact);

}