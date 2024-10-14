// Write a C program to compute the sum and the average of first 10 natural numbers.

#include<stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    float avg;
    do
    {
        sum = sum + i;
        printf("Sum = %d \n", sum );
        i++;
    }
    while(i<=10);
    avg = sum / 10.0;
    printf("Average = %f", avg);
    return 0;
}