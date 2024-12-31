/*1. Write a function Fact to find the factorial of a given number. Using this function,
compute NCR in the main function. 
week: 8
date:30/10/2024*/
#include<stdio.h>
    int fact(int a ,int b)
    {
        long double n=1,r=1,s=1,cal=0;
        for(int i=a;i>=1;i--)
            {
                n=n*i;
            }
 
        for(int j=b;j>=1;j--)
        {
            r=r*j;
        }

        for(int m=a-b;m>=1;m--)
        {
            s=s*m;
        }
 
        cal=n/(r*(s));
        return (cal);
    }
    int main()
    {
        int n,r,k;
        printf("Enter The total number of items and The number of items that can be selected at once\n");
        scanf("%d %d",&n,&r);
        k=fact(n,r);
        printf("NCR is %d ",k);
        return 0;
        
    }


