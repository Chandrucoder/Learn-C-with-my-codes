//list of palindrome while

#include<stdio.h>
void main()
{
	int start,end,i,temp,rev,rem,flag=0;
	scanf("%d%d",&start,&end);
	i=start;
	do
	{
		rev=0;
		temp=i;
		do
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}while(temp);
		if(rev==i)
		{
			printf("%d is palindrome \n",i);
			flag=0;
		}
		i++;
	}while(i<=end);
	if(flag==1)
		printf("There is none");
}