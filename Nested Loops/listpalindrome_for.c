//list of palindrome for loop

#include<stdio.h>
void main()
{
	int start,end,i,temp,flag=0,rev,rem;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++)
	{
		rev=0;
		for(temp=i;temp!=0;)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(rev==i)
		{
			printf("%d is palindrome \n",i);
			flag=1;
		}
	if(flag==0)
	{
		printf("There is none");
	}
	}
}