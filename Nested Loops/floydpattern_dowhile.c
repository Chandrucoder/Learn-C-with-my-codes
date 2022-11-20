//Floyd do while

#include<stdio.h>
void main()
{
	int i,j,k=1,row;
	scanf("%d",&row);
	i=1;
	do
	{
		j=1;
		do
		{
			printf("%d",k);
			k++;
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=row);
}