//basic arithmetic dynamic
#include <stdio.h>
void main()
{
	int num1,num2,sum,diff,product;
	double div;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	diff=num1-num2;
	product=num1*num2;
	div=(double)(num1/num2);
	printf("The sum of two number %d\n",sum);
	printf("The sum of two number %d\n",diff);
	printf("The sum of two number %d\n",product);
	printf("The sum of two number %lf",div);
		
}
