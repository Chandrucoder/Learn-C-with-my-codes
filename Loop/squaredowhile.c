//square do while

#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d \n",i*i);
		i++;
	}
	while(i<=n);

}