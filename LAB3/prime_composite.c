/*4. Write a program using do-while loop to read the numbers until -1 is encountered. Also
count the number of prime numbers and composite numbers entered by user.
[Hint: 1 is neither prime nor composite]
week:03
*/
#include<stdio.h>
int main()
{
    int prime,num,i,count,p=0,c=0;
    do
    {
        printf("Enter a number:");
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }
        if(num==1)
        {
            printf("1 is neither prime nor composite\n");
            continue;
        }
        count=2;
        i=1;
        while(num>count)
        {
            if(num%count==0)
            {
              i=0;
              c++;
              break;
            }
            count++;
        }
        if(i!=0)
        {
            printf("%d is a prime number\n",num);
            p++;
        }
        else
        {
            printf("%d is a composite number\n",num);
        }
    }
    while(i!=-1);
    printf("prime number is entered %d times\n",p);
    printf("composite number is entered %d times\n",c);
}
