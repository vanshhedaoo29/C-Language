// Write a C program to find a minimum between two numbers.

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d", &a , &b);

    if(a<b)
    {
        printf("a is smaller = %d",a);
    }
    else
    {
        printf("b is smaller = %d", b);
    }
   return 0;
}