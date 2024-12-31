/*4.Search the position of the number that is entered by the user and delete that particular 
number from the array and display the resultant array elements.
week:05
date:11/09/2024
*/
#include<stdio.h>
int main()
{
    int n,i,a[100],ele,pos,j,k=1;

    printf("Enter the number of elements of the array:");
        scanf("%d",&n);
    printf("Enter the elements of the array\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to be deleted\n");
        scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i] == ele)
        {
            pos=i+1;
            printf("%d is found at %dth position",ele,pos);
                for(j=i; j<n; j++)
                {
                    a[j]=a[j+1];
                }
                 n=n-1;
                k=0;
        }
    }

if(k == 0)
{
    printf("\nAfter deletion of %d at position %d array is\n",ele,pos);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
    else
        printf("Entered element not found\n");
    return 0;
}
