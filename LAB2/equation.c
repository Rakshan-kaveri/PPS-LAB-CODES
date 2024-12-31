/*compute all the roots of a quadratic equation using switch case
week:02
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	int root;
	printf("Enter a,b,c \n");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		root=0;
	}
	else if(d==0)
	{
		root=1;
	}
	else
		root=2;
		
	switch(root)
{
	case 0: printf("Roots are real and distinct \nRoot1=%f\nRoot2=%f",(-b + sqrt(d))/(2*a),(-b - sqrt(d))/(2*a));
		break;	
	case 1: printf("Roots are real and equal\nRoot1=%f\nRoot2=%f",-b / (2*a),-b / (2*a));
		break;
	case 2: printf("Roots are imagnary\n%f +i %f\n%f -i %f",-b/(2*a),pow(fabs(d),0.5)/(2*a),-b/(2*a),pow(fabs(d),0.5)/(2*a));
		break;
}
	return 0;
}

