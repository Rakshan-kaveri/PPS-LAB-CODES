/*7 program to convert the given temperature fahrenheit to centigrade
date:14/08/2024
week:1*/
#include<stdio.h>
int main()
{
	float fah ,cen;
	printf("Enter the temperature in fahrenheit \n");
	scanf("%f",&fah);
	cen=(5*(fah-32)/9);
	printf("\nEntered temperature in centigrade is %f",cen);
	return 0;
}

