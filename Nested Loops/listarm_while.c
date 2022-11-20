//list of Armstrong number while

#include<stdio.h>
void main()
{
	int i,start,end,temp,rem,sum,flag=0;
	scanf("%d%d",&start,&end);
	i=start;
	while(i<=end)
	{
		sum=0;
		temp=i;	
		while(temp)
		{
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d \n",i);
			flag=1;
		}
		i++;
	}
	if(flag==0)
		printf("There is none");
	
}