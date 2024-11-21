#include <stdio.h>
void a(void);

int main() 
{
    a();
    return 0;
}
void a(void)
{
    int a,b,c,d,e,sum;
    float avg;
    printf("Enter value of a,b,c,d,e :\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5;
    printf("The average of five numbers is :%.2f", avg);
}