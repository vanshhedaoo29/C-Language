// Search an element using linear search


#include <stdio.h>
int main ()
{ 
int a[4] = {2,3,8,9};
int i, search;

printf("Enter the element:");
scanf("%d",&search);

for(i=0 ; i<4 ; i++)
   {
       if(a[i]==search)
         {
             printf("Search element present in array at place %d", i+1);
             break;
         }
   }     
        if(i==4)
          {
              printf("Element not present in array");
          }
       return 0;
}