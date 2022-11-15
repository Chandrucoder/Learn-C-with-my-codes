//basic arithmetic static
#include <stdio.h>
int a,b,sum,diff,product;
double div;
void main()
{
	a=20;
	b=10;
	sum=a+b;
	diff=a-b;
	product=a*b;
	div=a/b;
	printf("The sum of a and b is %d\n",sum);
	printf("The difference between a and b is %d\n",diff);
	printf("The product of a and b is %d\n",product);
	printf("The division of a and b is %lf",div);	
}