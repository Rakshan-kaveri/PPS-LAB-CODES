/*1. Write a function Fact to find the factorial of a given number. Using this function,
compute NCR in the main function.
week: 8
date:30/10/2024*/
#include<stdio.h>
long long Fact(int n)
{
    long long f=1;
    int i;
    for(i=2;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int n,r;
    long long ncr;
    printf("Enter n and r\n");
    scanf("%d %d",&n,&r);
    if(n<0||r<0||r>n||n>20)
    {
        printf("Enter 0 <= r <= n <= 20\n");
        return 0;
    }
    ncr=Fact(n)/(Fact(r)*Fact(n-r));
    printf("%dC%d = %lld\n",n,r,ncr);
    return 0;
}
