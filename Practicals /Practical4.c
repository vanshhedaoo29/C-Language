// Write C program to print fibonacci series using for loop.

#include <stdio.h>

int main() 
{
    int a, b, i, n, sum=0;
    printf("Enter the series length : ");
    scanf("%d", &n);
    
    printf("Enter the value of a : ");
    scanf("%d", &a);
    
    printf("Enter the value of b : ");
    scanf("%d", &b);
    
    printf("%d\t%d\t", a, b);
    for(i=2 ; i<n ; i++)
    {
        sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }
    return 0;
}
    
 
