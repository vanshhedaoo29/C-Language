// Multiplication of two matrices

#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], m[10][10];
    int i, j, k, r1, c1, r2, c2;

    // Input dimensions of matrix A
    printf("Enter the no. of rows and columns of matrix A:\n");
    scanf("%d %d", &r1, &c1);

    // Input dimensions of matrix B
    printf("Enter the no. of rows and columns of matrix B:\n");
    scanf("%d %d", &r2, &c2);
   
    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r1; i++) 
       {
        for (j = 0; j < c1; j++) 
           {
             printf("Element [%d][%d]: ", i, j);
             scanf("%d", &a[i][j]);
           }
       }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; i++) 
       {
        for (j = 0; j < c2; j++) 
           {
             printf("Element [%d][%d]: ", i, j);
             scanf("%d", &b[i][j]);
           }
        }

    // Initialize resultant matrix to zero
    for (i = 0; i < r1; i++) 
       {
        for (j = 0; j < c2; j++) 
           {
             m[i][j] = 0;
           }
       }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++) 
       {
        for (j = 0; j < c2; j++) 
           {
            for (k = 0; k < c1; k++) 
               {
                 m[i][j] = m[i][j] + a[i][k] * b[k][j];
               }
           }
       }

    // Print the resultant matrix
    printf("The resultant matrix is:\n");
    for (i = 0; i < r1; i++) 
       {
        for (j = 0; j < c2; j++) 
           {
            printf("%d\t", m[i][j]);
           }
        printf("\n");
       }

    return 0;
}
