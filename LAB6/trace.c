/*2. Compute and display the trace and norm of a given square matrix. 
week: 6
date:9/10/2024
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
     int trace = 0;
    double norm = 0;
    int matrix[100][100];
    printf("Enter the Dimension of the square matrix (n x n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
        {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        }
    for (int i = 0; i < n; i++)
     {
        trace += matrix[i][i];
        for (int j = 0; j < n; j++)
         {
            norm += matrix[i][j] * matrix[i][j];
        }
    }

    norm = sqrt(norm);

    printf("Trace of the matrix: %d\n", trace);
    printf("norm of the matrix: %.2lf\n", norm);

    return 0;
}
