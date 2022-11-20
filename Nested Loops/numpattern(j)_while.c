//pattern row while loop

#include<stdio.h>
void main()
{
	int i,j,row;
	scanf("%d",&row);
	i=1;
	while(i<=row)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
	
}
