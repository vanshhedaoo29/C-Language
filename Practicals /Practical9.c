// Store customer information in structure and display it.

#include <stdio.h>
#include <string.h>
struct customer
{
    char cname[50];
    char addr[50];
    char bname[50];
    char branch[50];
    char city[50];
}c;
int main() 
{
    strcpy(c.cname,"Vansh Kishor Hedaoo");
    strcpy(c.addr,"Kathora Naka");
    strcpy(c.bname,"State Bank of India");
    strcpy(c.branch,"Gadge Nagar");
    strcpy(c.city,"Amravati");
    
    printf("Customer Information :\n");
    printf("Customer Name : %s \n", c.cname);
    printf("Address : %s \n", c.addr);
    printf("Bank Name : %s \n", c.bname);
    printf("Branch : %s \n", c.branch);
    printf("City : %s \n", c.city);
    return 0;
}