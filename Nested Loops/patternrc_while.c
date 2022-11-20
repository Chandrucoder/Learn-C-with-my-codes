//pattern row and column while loop

#include<stdio.h>
void main()
{
	int i,j,row,column;
	scanf("%d%d",&row,&column);
	i=1;
	while(i<=row)
	{
		j=1;
		while(j<=column)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	
}
