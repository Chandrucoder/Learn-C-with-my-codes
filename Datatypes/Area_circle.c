/*Area of a circle
Formula pi*r**2 
**=square
Value of pi=3.14 */

#include <stdio.h>
void main()
{
	double radius,area;
	printf("Enter radius of circle:");
	scanf("%lf",&radius);
	area=3.14*radius*radius;
	printf("The area of a circle is %lf",area);
	
}