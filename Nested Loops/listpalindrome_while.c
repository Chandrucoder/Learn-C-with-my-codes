//list of palindrome while

#include<stdio.h>
void main()
{
	int start,end,i,temp,rev,rem,flag=0;
	scanf("%d%d",&start,&end);
	i=start;
	while(i<=end)
	{
		rev=0;
		temp=i;
		while(temp)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(rev==i)
		{
			printf("%d is palindrome \n",i);
			flag=0;
		}
		i++;
	}
	if(flag==1)
		printf("There is none");
}