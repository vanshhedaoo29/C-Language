// Write a c program to print the addition of three numbers.

#include<stdio.h>

int main()
{
    int a; 
    int b;
    int c;
    int d;
    printf("Enter the value of a = ", a);
    scanf("%d", &a);

    printf("Enter the value of b = ", b);
    scanf("%d", &b);

    printf("Enter the value of c = ", c);
    scanf("%d", &c);

    d = a + b + c;
    printf("The sum of three numbers is %d", d);
    return 0;
}