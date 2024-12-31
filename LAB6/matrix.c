/*3. Perform matrix multiplication and display the resultant matrix.
week: 6
date:9/10/2024*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
 int i, j, m, n, p, q,k;
 int A[10][10], B[10][10],C[10][10];
 printf("enter the dimensions for matrix A \n");
 scanf("%d %d", &m, &n);
 printf("enter the dimensions for matrix B\n");
 scanf("%d %d", &p, &q);
 if(n!=p)
 {
  printf("not multiplicable \n");
  exit(0);
 }
 printf("enter elements for matrix A \n");
 for (i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d", &A[i][j]);
 }
 printf("\nenter elements for matrix B\n");
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  scanf("%d", &B[i][j]);
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
   {
    C[i][j]=0;
    for(k=0;k<n;k++)
    C[i][j]=C[i][j]+A[i][k]*B[k][j];
   }
 }
 printf("\nThe product matrix is \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
  printf("%d\t", C[i][j]);
  printf("\n");
 }
 return 0;
}

