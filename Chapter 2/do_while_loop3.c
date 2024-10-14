// Write a C program to compute the sum of the first 10 natural numbers.

#include<stdio.h>

int main()
{
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        printf("Sum = %d \n", sum );
        i++;
    }
    while(i<=10);
    return 0;
}