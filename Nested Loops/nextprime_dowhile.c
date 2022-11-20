//Next prime number do while

#include<stdio.h>
void main()
{
	int i,j,n,count;
	scanf("%d",&n);
	i=n+1;
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
		{
			printf("%d",i);
			break;
		}
		i++;
		
	}while(i>n);
	
}