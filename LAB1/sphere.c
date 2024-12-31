/*6 program to compute volume and surface area of sphere
date:14/08/2024
week:1
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float radius,area,volume;
	printf("Enter the radius of the circle\n");
	scanf("%f",&radius);
	volume=(4*3.14*radius*radius*radius)/3;
	area=4*3.14*radius*radius;
	printf("volume of the sphere is %f\n",volume);
	printf("surface area of the sphere is %f",area);
	return 0;
}

	
