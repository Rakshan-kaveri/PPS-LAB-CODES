/*program to check the given number is odd or even
date:21/08/2024
week:02
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number to check if its odd or even \n");
	scanf("%d",&n);
	if(n%2==0)
		printf("%d is even\n",n);
	else
		printf("%d is odd\n",n);
	return 0;
}
