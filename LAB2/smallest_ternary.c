/*program to find the smallest among three numbers using conditional operator
week:02
date 21/08/2024
*/
#include<stdio.h>
int main()
{
	float a,b,c,s,r,t;
	printf("Enter three numbers\n");
	scanf("%f %f %f",&a,&b,&c);
	r=(a<b)? a:b;
	s=(b<c)? b:c;
	t=(r<s)? r:s;
	printf("%f is the smallest among the given three numbers\n",t);
	return 0;
}

