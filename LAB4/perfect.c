/*4.Check whether a given number is perfect or not.
week:04
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("%d is a perfect number\n",n);
    else
        printf("%d is not a perfect number\n",n);
    return 0;
}
