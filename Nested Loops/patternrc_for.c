//pattern row and column for loop

#include<stdio.h>
void main()
{
	int i,j,row,column;
	scanf("%d%d",&row,&column);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=column;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
