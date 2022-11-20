//Floyd while

#include<stdio.h>
void main()
{
	int i,j,k=1,row;
	scanf("%d",&row);
	i=1;
	while(i<=row)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
}