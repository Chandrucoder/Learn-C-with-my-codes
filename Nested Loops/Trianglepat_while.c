//Triangle pattern while 

#include<stdio.h>
void main()
{
	int i,j,k=1,n,x;
	scanf("%d%d",&n,&x);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			if(k%x==0)
				printf("*");
			else
				printf("%d",k);
			k++;
			j++;
		}
		printf("\n");
		i++;
	}
}