//palindrome do while

#include<stdio.h>
void main()
{
	int n,rev=0,rem,temp;
	scanf("%d",&n);
	temp=n;
	do
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp=temp/10;
	}
	while(temp);
	if(rev==n)
		printf("%d is palindrome",n);
	else
		printf("%d is not palindrome",n);
}