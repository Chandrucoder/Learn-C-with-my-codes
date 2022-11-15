//Grade system

#include<stdio.h>
void main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100)
	{
		printf("O grade");
	}
	else if(marks>=80 && marks<90)
	{
		printf("A+ grade");
	}
	else if(marks>=70 && marks<80)
	{
		printf("A grade");
	}
	else if(marks>=60 && marks<70)
	{
		printf("B+ grade");
	}
	else if(marks>=50 && marks<60)
	{
		printf("B grade");
	}
	else
	{
		printf("RA grade");
	}
}