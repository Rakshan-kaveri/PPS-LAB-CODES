/*2.Arrange the given elements in a 1D array in ascending and descending order using 
bubble sort method.
week:05
date:11/09/2024
*/
#include<stdio.h>
int main()
{

    int n,i,a[100],temp,j;
    char ch;

        printf("Enter 'a' for ascending or 'd' for descending order\n");
            scanf("%c",&ch);
        printf("Enter the number of elements of the array:");
            scanf("%d",&n);
        printf("Enter the elements of the array\n");

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

switch(ch)
{
case 'a': for(i=0;i<n-1;i++)
            {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                        
            }
            }
            break;
case 'd': for(i=0;i<n-1;i++)
            {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                        
            }
            }
            break;
default: printf("Wrong order inputted\n ");
            break;
}

if(ch=='a'||ch=='d')
{
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
         printf("%d\t",a[i]);
    }
}
return 0;

}
