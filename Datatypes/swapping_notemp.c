//Swapping of two number without temporary variable
#include <stdio.h>
void main()
{
	int a=10,b=15;
	//printf("Enter a and b value for swap:");
	//scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped values of a and b are %d and %d",a,b);
	
}