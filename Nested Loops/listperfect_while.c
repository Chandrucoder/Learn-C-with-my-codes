//list of perfect numbers for

#include<stdio.h>
void main()
{
	int start,end,sum,flag=0,i,j;
	scanf("%d%d",&start,&end);
	i=start;
	while(i<=end)
	{
		sum=0;
		j=1;
		while(j<=i/2)
		{
			if(i%j==0)
				sum=sum+j;
			j++;
		}
		if(sum==i)
		{
			printf("%d is perfect \n",i);
			flag=1;
		}
		i++;
	}
	if(flag==0)
		printf("There is none");
}