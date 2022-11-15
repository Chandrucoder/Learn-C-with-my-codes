//Swapping of two number dynamic
#include <stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter a and b value for swap:");
	scanf("%d%d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("Swapped values of a and b are %d and %d",a,b);
	
}