// Write a C program to transpose given matrix using 2-D array.

#include<stdio.h>
int main()
{
    int a[10][10], T[10][10], i, j, r=2, c=3;

    
    
    printf("Enter the elements of matrix A :\n");

    for(i=0 ; i<r ; i++)
       {
        for(j=0 ; j<c ; j++)
           {
            printf("Enter the elements [%d,%d]=", i,j);
            scanf("%d", &a[i][j]);
           }
       }

    for(i=0 ; i<r ; i++)
       {
        for(j=0 ; j<c ; j++)
           {
            T[j][i]=a[i][j];
           }
       }
    printf("The matrix A is:\n");

    for(i=0 ; i<r ; i++)
       {
        for(j=0 ; j<c ; j++)
           {
            printf("%d \t", a[i][j]);
           }
           printf("\n");
       }
    printf("The transpose matrix is:\n");

    for(i=0 ; i<c ; i++)
       {
        for(j=0 ; j<r ; j++)
           {
            printf("%d \t", T[i][j]);
           }
           printf("\n");
       }

    return 0;         
}