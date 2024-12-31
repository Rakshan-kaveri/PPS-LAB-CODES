/*2. Generate prime numbers between 2 given limits. (use while loop)
week:03
*/
#include<stdio.h>
int main()
{
    int start,end,i,count;
    printf("Enter two limits\n");
    scanf("%d %d",&start ,&end);
    while(start<end)
    {
    i=0;
    count=2;
    while(count<start)
    {
    if(start%count==0)
    {
        i=1;
    }

    count++;
    }
    if(i==0)
            printf("%d\t",start);
    start++;
    }
}
