/*4. Write a program using do-while loop to read the numbers until -1 is encountered. Also
count the number of prime numbers and composite numbers entered by user.
[Hint: 1 is neither prime nor composite]
week:03
*/
#include<stdio.h>
int main()
{
    int num,count,isprime,p=0,c=0;
    do
    {
        printf("Enter a number (-1 to stop):");
        scanf("%d",&num);
        if(num==-1)
            break;
        if(num<2)
        {
            printf("%d is neither prime nor composite\n",num);
            continue;
        }
        isprime=1;
        count=2;
        while(count*count<=num)
        {
            if(num%count==0)
            {
                isprime=0;
                break;
            }
            count++;
        }
        if(isprime)
        {
            printf("%d is a prime number\n",num);
            p++;
        }
        else
        {
            printf("%d is a composite number\n",num);
            c++;
        }
    }
    while(num!=-1);
    printf("prime numbers entered: %d\n",p);
    printf("composite numbers entered: %d\n",c);
    return 0;
}
