//First n terms for

#include<stdio.h>
void main()
{
	int i,j,k=1,n,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+k;
			k++;
		}
		printf("%d",sum);
		printf(" ");
	}	
}