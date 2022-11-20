//pattern row and column do while loop

#include<stdio.h>
void main()
{
	int i,j,row,column;
	scanf("%d%d",&row,&column);
	i=1;
	do
	{
		j=1;
		do
		{
			printf("*");
			j++;
		}while(j<=column);
		printf("\n");
		i++;
	}while(i<=row);
	
}
