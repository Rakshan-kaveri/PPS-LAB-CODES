/*2.Generate Floyd’s triangle using natural numbers for a given limit N.
week:04
*/
#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k++;
            printf("%d \t",k);
        }
        printf("\n");
    }
    return 0;
}
