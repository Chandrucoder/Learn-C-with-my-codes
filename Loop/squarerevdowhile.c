//square rev do while

#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	i=n;
	do
	{
		printf("%d \n",i*i);
		i--;
	}
	while(i>=1);

}