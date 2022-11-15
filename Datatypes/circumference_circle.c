/* Circumference of a circle
Formula 2*pi*r
pi=3.14
*/

#include <stdio.h>
void main()
{
	double radius,circumference;
	printf("Enter a radius:");
	scanf("%lf",&radius);
	circumference=2*3.14*radius;
	printf("The circumference of circle is %lf",circumference);
}