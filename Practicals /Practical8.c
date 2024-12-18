// Find factorial of a given no. using recursive function.

#include <stdio.h>
int f;
int fact(int);
int main() 
{
    int n;
    printf("Enter the no. for factorial :");
    scanf("%d", &n);
    
    f = fact(n);
    printf("Factorial of %d is %d", n , f);
    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
       f = n * fact(n-1);
    }
    return f;
}