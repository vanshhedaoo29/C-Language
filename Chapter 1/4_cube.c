// Implement C program to find cube using macros.

#include<stdio.h>
#define cube(x) x*x*x
int main()
{
    int a;
    a = cube(4);
    printf("Cube of 5 = %d",a);
    return 0;
}