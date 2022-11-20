//Triangle pattern do while

#include<stdio.h>
void main()
{
	int i,j,k=1,row,n;
	scanf("%d%d",&row,&n);
	i=1;
	do
	{
		j=1;
		do
		{
			if(k%n==0)
				printf("*");
			else
				printf("%d",k);
			k++;
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=row);
}