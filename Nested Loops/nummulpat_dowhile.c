//number multiple pattern while

#include<stdio.h>
void main()
{
	int i,j,n;
	scanf("%d",&n);
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%d",i*j);
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=n);
}
