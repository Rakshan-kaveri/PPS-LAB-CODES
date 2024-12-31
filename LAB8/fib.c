/*. Write a recursive function FIB to generate nth Fibonacci term. Write a main program to print first N Fibonacci terms using function FIB.
[Hint: Fibonacci series is 0, 1, 1, 2, 3, 5, 8 ...]
week: 8
date:30/10/2024
 */
#include<stdio.h>
 int FIB(int n)
 {
    if(n==0)
        return (0);
    if(n==1)
        return (1);
   return FIB(n-1)+FIB(n-2);
 }
 int main()
 {
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",FIB(i));

    }
    return 0;
 }
