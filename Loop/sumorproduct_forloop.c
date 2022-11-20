//sum or product of digits do while

#include<stdio.h>
void main()
{
	int n,rem,sum=0,product=1,temp;
	scanf("%d",&n);
	for(temp=n;temp!=0;)
	{
		rem=temp%10;
		sum=sum+rem;
		product=product*rem;
		temp=temp/10;
	}
	if(n%2==0)
		printf("%d",sum);
	else
		printf("%d",product);
}                  
	
                   