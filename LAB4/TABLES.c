/*1.Generate the multiplication table for ‘n’ numbers up to ‘k’ terms (using nested for
loops).
week:04
*/
#include<stdio.h>
int main()
{
    int n,k,i,j;
    printf("Enter 'n' numbers and 'k' terms\n");
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
