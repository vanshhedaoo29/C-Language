// Matrix addition using the concept of 2-D array

#include <stdio.h>

int main() 
{
    int i, j, r, col;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter the no. of rows : ");
    scanf("%d", &r);
    
    printf("Enter the no. of columns : ");
    scanf("%d", &col);
    
    printf("Enter elements in matrix A :\n ");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("Enter elements in matrix B :\n ");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }
    
    
   printf("The resultant matrix is :\n ");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("%d\t", c[i][j]);
        }
     printf("\n");   
        
    }
    return 0;
}