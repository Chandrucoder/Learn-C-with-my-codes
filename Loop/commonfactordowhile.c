//common factor forloop

#include<stdio.h>
void main()
{
	int x,y,min,i;
	scanf("%d",&x,&y);
	if(x<y)
		min=x;
	else
		min=y;
	i=1;	
	do
	{
		if(x%i==0 && y%i==0)
			printf("%d \n",i);
		i++;
	}
	while(i<=min);
}