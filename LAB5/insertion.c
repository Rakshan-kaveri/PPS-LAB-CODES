/*ADDITIONAL 1.Insert an element into a 1D array, by getting an element and the position from the 
user. 
week:05
date:11/09/2024
*/
#include<stdio.h>
int main()
{
    int n,i,a[100],ele,pos;

        printf("Enter the number of elements of the array:");
            scanf("%d",&n);

        printf("Enter the elements of the array\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        printf("Enter element to be inserted and its position\n");
            scanf("%d%d",&ele,&pos);
        for(i=n;i>=pos;i -- )
        {
            a[i]=a[i-1];
        }
        a[pos-1]=ele;
        n=n+1;

        printf("After insertion of %d at position %d array is\n",ele,pos);
            for(i=0;i<n;i++)
                printf("%d\t",a[i]);

    return 0;

}
