//first n terms do while

#include<stdio.h>
void main()
{
	int i,j,k=1,sum,row;
	scanf("%d",&row);
	i=1;
	do
	{
		sum=0;
		j=1;
		do
		{
			sum=sum+k;
			k++;
			j++;
		}while(j<=i);
		printf("%d",sum);
		printf(" ");
		i++;
	}while(i<=row);
}