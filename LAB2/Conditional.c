/*program to find the smallest among three numbers using conditional operator
week:02
date 21/08/2024
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	((a<b)&&(a<c))? (printf("a=%d is the smallest",a)):(b<c)? (printf("b=%d is the smallest",b)):(printf("c=%d is the smallest",c));
	return 0;
}

