// Implement a C program to print 2 Characters using getchar and putchar input output function

#include<stdio.h>

int main()
{
    char ch1, ch2;
    printf(" Enter 2 Characters: ");
    ch1 = getchar();
    ch2 = getchar();
    putchar(ch1);
    putchar(ch2);
    return 0;
}