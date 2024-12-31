/*5 program to compute and display simple and compound interest

date:18/04/2024
week:1*/
#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,r,si,ci,k,t;
	printf("Enter the value of P, N and R to compute simple and compound interest\n");
	scanf("%f %f %f",&p,&n,&r);
	si=((p*n*r)/100);
	k=(1+(r/100));
	t=pow(k,n);
	ci=((p*t)-p);
	printf("simple interest is %f\ncompound interest is %f",si,ci);
	return 0;
}

