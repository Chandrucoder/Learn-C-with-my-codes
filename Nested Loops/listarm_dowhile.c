//list of Armstrong number do while

#include<stdio.h>
void main()
{
	int i,start,end,temp,rem,sum,flag=0;
	scanf("%d%d",&start,&end);
	i=start;
	do
	{
		sum=0;
		temp=i;	
		do
		{
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}while(temp);
		if(sum==i)
		{
			printf("%d \n",i);
			flag=1;
		}
		i++;
	}while(i<=end);
	if(flag==0)
		printf("There is none");
	
}