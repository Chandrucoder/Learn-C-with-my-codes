/*Volume of a sphere - 4/3*pi*r**2
pi=3.14
**=square*/
#include <stdio.h>
void main()
{
	double radius,volume;
	printf("Enter a radius:");
	scanf("%lf",&radius);
	volume=(double)4/3*(3.14*radius*radius);
	printf("Volume of sphere %lf",volume);
}