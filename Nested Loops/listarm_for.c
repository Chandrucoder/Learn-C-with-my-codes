//list Armstrong number for loop

#include<stdio.h>
void main()
{
	int i,start,end,temp,rem,sum,flag=0;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		sum=0;
		for(temp=i;temp!=0;)
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
	}
	if(flag==0)
		printf("There is none");
	
}