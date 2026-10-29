/*4.Search the position of the number that is entered by the user and delete that particular
number from the array and display the resultant array elements.
week:05
date:11/09/2024
*/
#include<stdio.h>
int main()
{
    int n,i,a[100],ele,pos=-1;

    printf("Enter the number of elements of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to be deleted\n");
    scanf("%d",&ele);

    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Entered element not found\n");
        return 0;
    }

    printf("%d is found at position %d\n",ele,pos+1);
    for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
    n--;

    printf("After deletion of %d array is\n",ele);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 0;
}
