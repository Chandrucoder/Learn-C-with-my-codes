//common factors of x and y

#include<stdio.h>
void main()
{
	int x,y,i,min;
	scanf("%d%d",&x,&y);
	if(x<y)
		min=x;
	else
		min=y;
	i=1;
	while(i<=min)
	{
		if(x%i==0 && y%i==0)
			printf("%d \n",i);	
	i++;
	}
	
}