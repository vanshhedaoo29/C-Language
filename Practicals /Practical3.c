// Perform all bitwise operations by using the concept of precedence and associativity.

#include <stdio.h>
int main() 
{
    int a, b, c, d, e, f, g;
    double precid;
    
    printf("Enter the value of a : ");
    scanf("%d", &a);
    
    printf("Enter the value of b : ");
    scanf("%d", &b);
    
    c = a&b;
    printf("The value of c is %d \n", c);
    
    d = a|b;
    printf("The value of d is %d \n", d);
    
    e = a^b;
    printf("The value of e is %d \n", e);
    
    f = a<<b;
    printf("The value of f is %d \n", f);
    
    g = a>>b;
    printf("The value of g is %d \n", g);
    
    precid = a + ( b * ( b/a )) + a;
    printf("The value of operation after precedence is %lf", precid);
    
    return 0;
}