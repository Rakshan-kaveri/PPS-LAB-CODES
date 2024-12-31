/*4. Interchange any two Rows & Columns in the given matrix and display resultant.
week: 6
date:9/10/2024
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100][100],i,j,m,n,row1,row2,col1,col2,temp;
    printf("Enter the dimensions\n");
        scanf("%d %d",&m,&n);
     printf("Enter the elements of 2-D array\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter two rows to be swapped\n");
            scanf("%d %d",&row1,&row2);
        for(j=0;j<n;j++)
        {
            temp=a[row1-1][j];
            a[row1-1][j]=a[row2-1][j];
            a[row2-1][j]=temp;

        }
        printf("Enter two columns to be swapped\n");
            scanf("%d %d",&col1,&col2);
        for(i=0;i<m;i++)
        {
            temp=a[i][col1-1];
            a[i][col1-1]=a[i][col2-1];
            a[i][col2-1]=temp;

        }
        printf("Matrix after interchange of rows and columns\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        return 0;
}
