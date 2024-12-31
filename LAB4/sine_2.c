/*3.Evaluate the sine series, sin(x)= x- x3/3! + x5/5!–x7/7!+ ……… to n terms.
week:04
*/
#include<stdio.h>
#define PI 3.141592
int main()
{
    float n,term,x,i,sine,degrees;
    printf("Enter the degree:");
    scanf("%f",&degrees);
    printf("Enter the number of steps:");
    scanf("%f",&n);
    x=PI/180*degrees;
    term=x;
    sine=x;
    for(i=1;i<=n;i++)
    {
        term=(term*(-1)*x*x)/(2*i*(2*i+1));
        sine+=term;
    }
    printf("sine of number is %f",sine);
    return 0;
}
