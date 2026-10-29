/*1. Reverse a given number and check if it is a palindrome or not. (use while loop).
[Ex: 1234, reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321]
week:03
*/
#include<stdio.h>
int main()
{
    int temp ,rev , rem ,num;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    rev=0;
    rem=0;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(num!=rev)
       {
        printf("%d is not a palindrome",num);
        }
    else
    {
    printf("\n%d is a palindrome and its reverse is %d",num,rev);
    }
    return 0;

}

