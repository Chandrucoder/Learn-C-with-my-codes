//Volume of cone - (pi*r**2*h)/3
//pi=3.14 and **=square

#include <stdio.h>
void main()
{
	double radius,height,volume;
	printf("Enter a radius:");
	scanf("%lf",&radius);
	printf("Enter a height:");
	scanf("%lf",&height);
	volume=(double)(3.14*radius*radius*height)/3;
	printf("The volume of a cone is %lf",volume);
}