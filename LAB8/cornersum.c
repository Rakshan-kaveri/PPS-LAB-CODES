/*Write a function CornerSum which takes as a parameter, no. of rows and no. of columns of a matrix and returns the sum of the elements in the four corners of the matrix.
Write a main function to test the function.
week: 8
date:30/10/2024
 */
#include<stdio.h>

    int cornersum(int a ,int b)
    {
        int m[50][50],i,j,sum=0;
         printf("Enter the elements of the 2-D matrix \n");
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
         sum=m[0][0]+m[0][b-1]+m[a-1][0]+m[a-1][b-1];
        return (sum);
    }
    int main()
    {
        int n,k,m;
        printf("Enter the dimension of the matrix \n");
        scanf("%d %d",&m,&n);
        k=cornersum(m,n);
        printf("sum of the elements in the four corners of the matrix is %d ",k);
        return 0;


    }
