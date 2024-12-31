/*2 program to find the sum ,difference,product and quotient of 2 numbers
Date:14/08/2024
week:1
*/
#include<stdio.h>
int main()
{
	float a,b,sum,diff,pro,quo;
	printf("Enter two numbers \n");
	scanf("%f %f",&a,&b);
	sum=a+b;
	diff=a-b;
	pro=a*b;
	quo=a/b;
	printf("Sum=%f\nDifference=%f\nProduct=%f\nquotient=%f\n",sum,diff,pro,quo);
	return 0;
}

