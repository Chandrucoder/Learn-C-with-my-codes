//Triangle pattern multiples of x for

#include<stdio.h>
void main()
{
	int i,j,n,k=1,x;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k%x==0)
				printf("*");
			else
				printf("%d",k);
			k++;
		}
		printf("\n");
	}
}