/*program to find the largest among given 3 numbers
date:21/08/2024
week:02
*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three numbers\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%f is the largest among the given three numbers\n",a);
		else
			printf("%f is the largest among the given three numbers\n",c);
	}
	else
	{
		if(b>c)				
			printf("%f is the largest among the given three numbers\n",b);
		else
			printf("%f is the largest among the given three numbers\n",c);
	}
	return 0;
}

