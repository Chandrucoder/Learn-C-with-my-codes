//Next prime for

#include<stdio.h>
void main()
{
	int i,j,num,count;
	scanf("%d",&num);
	for(i=num+1;i++;)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d",i);
			break;
		}
	}
}