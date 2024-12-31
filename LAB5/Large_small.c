/*1.Find the largest and smallest edement in a  1D array
week: 5
date:11/09/2024
*/

#include<stdio.h>
int main ()
{
    int i,n,a[100],small,large;
    printf("Enter the number of elements of the array: ");
        scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    small=a[0];
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
        if(a[i]>large)
            large=a[i];
    }
        printf("Largest element is %d\n",large);
        printf ("smallest element is %d",small);
    return 0;

}
