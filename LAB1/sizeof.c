/*4 program to display the size of the datatype int, char,float,double,long int and long double
using sizeof()
date:14/08/2024
week:1 */
#include<stdio.h>
int main()
{
	int a;
	char c;
	float f;
	double d;
	long int i;
	long double l;
	printf("size of datatype int is %ld\n",sizeof(a));
	printf("size of datatype char is %ld\n",sizeof(c));
	printf("size of datatype float is %ld\n",sizeof(f));
	printf("size of datatype double is %ld\n",sizeof(d));
	printf("size of datatype long int is %ld\n",sizeof(i));
	printf("size of datatype long double is %ld\n",sizeof(l));
	return 0;
}

