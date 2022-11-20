//check same digit do while

#include<stdio.h>
void main()
{
	int n1,n2,i,unitdigit,tenthdigit,temp,rem;
	scanf("%d%d",&n1,&n2);
	unitdigit=n2%10;
	tenthdigit=(n2/10)%10;
	temp=n1;
	do
	{
		rem=temp%10;
		if(rem==unitdigit || rem==tenthdigit)
		{
			printf("Valid");
			break;
		}
		temp=temp/10;
		
	}while(temp);
	if(temp==0)
		printf("Invalid");
}