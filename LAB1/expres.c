/*8 program to evalute the given expression
date:14/08/2024
week:1*/
#include<stdio.h>
int main()
{
	float a,b,c,d;
	a=30;
	b=10;
	c=5;
	d=15;
	printf("Answer for 1 is %f\n",(a+b)*c/d);
	printf("Answer for 2 is %f\n",((a+b)*c)/d);
	printf("Answer for 3 is %f\n",a+(b*c)/d);
	printf("Answer for 4 is %f",(a+b)*(c/d));
	return 0;
}

