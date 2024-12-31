/*1. Display whether a given matrix is symmetric or not. [Hint: A = AT] 
week: 6
date:9/10/2024*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,m,n,a[100][100];
 printf("enter dimension \n");
 scanf("%d %d",&m,&n);
 if(m!=n)
 {
  printf("Enter a square matrix \n");
  exit(0);
 }
 printf("enter elements \n");
 for(i=0; i<m; i++)
 for(j=0; j<n; j++)
 scanf("%d",&a[i][j]);
 for(i=0; i<m; i++)
  {
   for(j=0; j<n; j++)
   {
    if (a[ i ][ j ] != a[ j ][ i ])
     {
      printf("\n Not symmetric \n");
      exit(0);
     }
   }
  }
 printf("\n Matrix is symmetric");
 return 0;
}
