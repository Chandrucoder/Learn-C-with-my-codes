//list of prime number nested for

#include<stdio.h>
void main()
{
	int start,end,flag=0,count,i,j;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{	
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d is prime number \n",i);
			flag=1;
	}
	if(flag==0)
		printf("please enter correct range");
}