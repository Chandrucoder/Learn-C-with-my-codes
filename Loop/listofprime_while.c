//list of prime number while

#include<stdio.h>
void main()
{
	int start,end,flag=0,count,i,j;
	scanf("%d%d",&start,&end);
	i=start;
	while(i<=end)
	{
		count=0;
		j=1;
		while(j<=i)
		{
			if(i%j==0)
				count++;
			j++;
		}
		if(count==2)
			printf("%d",i);
			flag=1;
		i++;	
	}
	if(flag==0)
		printf("Please enter correct range");
}