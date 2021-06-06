/* 
1. Write a C function that can perform a multiplication of two integers and return the
calculated result.
*/
#include <stdio.h>
#include <stdlib.h>
 int main()
{
    int x,y;
    int product;
    printf("Enter value1: ");
    scanf("%d", &x);
    printf("Enter value2: ");
    scanf("%d",&y);
    product = x*y;
    printf("The product is %d",product);   

    return 0;
}
