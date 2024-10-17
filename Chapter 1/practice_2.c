// Write a program to calculate the area and circumference of circle.

#include<stdio.h>

int main()
{
    int r;
    float pi = 3.14;

    printf("Enter the radius of circle = ", r);
    scanf("%d", &r);

    printf("The circumference of the circle is %f \n", 2*pi*r);

    printf("The area of the circle is %f", pi*r*r);
    return 0;
}