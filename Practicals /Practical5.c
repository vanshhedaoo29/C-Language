// Write a C program to solve 1-D array in ascending order.

#include <stdio.h>

int main() 
{
    int a[10], j, i, n, temp=0;
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    printf("Enter elements in an array :\n ");
    
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    
    printf("After sorting of array : \n");
    
    for(i=0 ; i<n ; i++)
    {
        printf("%d\t", a[i]); 
    }
    return 0;
}