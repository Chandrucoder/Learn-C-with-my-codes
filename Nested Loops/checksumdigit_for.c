//check sum digit for

#include<stdio.h>
void main()
{
	int n1,n2,unitdigit,tenthdigit,temp,rem;
	scanf("%d%d",&n1,&n2);
	unitdigit=n2%10;
	tenthdigit=(n2/10)%10;
	for(temp=n1;temp!=0;)
	{
		rem=temp%10;
		if(rem==unitdigit || rem==tenthdigit)
		{
			printf("Valid");
			break;
		}
		temp=temp/10;
	}
	if(temp==0)
		printf("Invalid");
		
}