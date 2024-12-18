// Perform all arithmetic operations using pointers.

#include <stdio.h>
int main() 
{
    int a, b, sum, sub, mul, divi, mod;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    
    printf("Enter the value of a : ");
    scanf("%d", &a);
    
    printf("Enter the value of b : ");
    scanf("%d", &b);
    
    printf("Perform all arithmetic operations using pointers :\n");
    sum = (*p1) + (*p2);
    sub = (*p1) - (*p2);
    mul = (*p1) * (*p2);
    divi = (*p1) / (*p2);
    mod = (*p1) % (*p2);
    
    printf("Addition = %d \n ", sum);
    printf("Subtraction = %d \n ", sub);
    printf("Multiplication = %d \n ", mul);
    printf("Division = %d \n ", divi);
    printf("Modulus = %d \n ", mod);
    return 0;
}