//number multiple pattern while

#include<stdio.h>
void main()
{
	int i,j,n;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}
