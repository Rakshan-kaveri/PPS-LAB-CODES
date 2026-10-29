/*2. Generate prime numbers between 2 given limits. (use while loop)
week:03
*/
#include<stdio.h>
int main()
{
    int start,end,num,count,isprime;
    printf("Enter two limits\n");
    scanf("%d %d",&start,&end);
    num=start;
    while(num<=end)
    {
        isprime=(num>=2);
        count=2;
        while(count*count<=num && isprime)
        {
            if(num%count==0)
                isprime=0;
            count++;
        }
        if(isprime)
            printf("%d\t",num);
        num++;
    }
    printf("\n");
    return 0;
}
