//pattern row and column while loop

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
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	
}
