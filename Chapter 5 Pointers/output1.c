// ( Arrays of Pointers )Consider the following C program and determine its output.

#include <stdio.h>
const int MAX = 5;
int main() 
{
    int num[]={10,20,30,40,50,60,70};
    int x, *ptr[MAX];
    
    for(x=0 ; x<MAX ; x++)   // Accessing numbers to pointers
    {
        ptr[x]=&num[x];
    }
    
    for(x=0 ; x<MAX ; x++)
    {
         printf("The value of num [%d] = %d \n", x, *ptr[x]);
    }
  return 0;
}


// Output

/* 
The value of num [0] = 10 
The value of num [1] = 20 
The value of num [2] = 30 
The value of num [3] = 40 
The value of num [4] = 50 
*/