//first n terms while

#include<stdio.h>
void main()
{
	int i,j,k=1,sum,row;
	scanf("%d",&row);
	i=1;
	while(i<=row)
	{
		sum=0;
		j=1;
		while(j<=i)
		{
			sum=sum+k;
			k++;
			j++;
		}
		printf("%d",sum);
		printf(" ");
		i++;
	}
}