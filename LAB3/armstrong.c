/*3. Check if the sum of the cubes of all digits of an inputted number equals the number
itself (Armstrong Number). (use while loop)
week:03
*/
#include<stdio.h>
int main()
{
    int rem,temp,num,prod;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    rem=0;
    prod=0;
    while(temp>0)
    {
        rem=temp%10;
        prod+=rem*rem*rem;
        temp=temp/10;
    }
    if(prod==num)
    {
        printf("\n%d is an armstrong number",num);
    }
    else
        printf("%d is not a armstrong number",num);
}
