//Next prime number while

#include<stdio.h>
void main()
{
	int i,j,n,count;
	scanf("%d",&n);
	i=n+1;
	while(i>n)
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
		{
			printf("%d",i);
			break;
		}
		i++;
		
	}
	
}