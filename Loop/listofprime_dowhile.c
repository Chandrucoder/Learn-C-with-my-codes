//list of prime number while

#include<stdio.h>
void main()
{
	int start,end,flag=0,count,i,j;
	scanf("%d%d",&start,&end);
	i=start;
	do
	{
		count=0;
		j=1;
		do
		{
			if(i%j==0)
				count++;
			j++;
		}while(j<=i);
		if(count==2)
			printf("%d",i);
			flag=1;
		i++;	
	}while(i<=end);
	if(flag==0)
		printf("Please enter correct range");
}