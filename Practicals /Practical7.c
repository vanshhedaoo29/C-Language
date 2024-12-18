// Reading and writing of strings using comparing two strings.

#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[20];
    char s2[20];
    printf("Enter the String 1 :\n ");
    
    fgets(s1, sizeof(s1),stdin);
    puts(s1);
    
    printf("Enter the String 2 :\n ");
    fgets(s2, sizeof(s2),stdin);
    puts(s2);
    
    int value = strcmp(s1,s2);
    
    if(value==0)
    {
        printf("Both string are equal");
    }
    else
    {
        printf("Both string are different");
    }
    return 0;
}