//list of perfect numbers

#include<stdio.h>
void main()
{
	int start,end,i,j,sum,flag=0;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
				sum=sum+j;	
		}
		if(sum==i)
		{
			printf("%d",i);
			flag=1;
		}
	}
	if(flag==0)
		printf("There is no perfect numbers");
}