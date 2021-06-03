/* 
1. Write a C function that can perform a multiplication of two integers and return the
calculated result.
*/
#include <stdio.h>
#include <stdlib.h>
int multiplyNum(int , int);//function declaration or prototype
int main()
{
int num1,num2,product;//variable declaration
printf("Enter the two number ");
scanf("%d %d",&num1,&num2);//taking two number as input from user
product=multiplyNum(num1,num2);//calling the function
//The product value (returned by the function) is stored in product variable.
printf("The product of these numbers :%d",product);
//display the product value
getch();
return 0;
}
int multiplyNum(int a, int b)//defining function based in declaration
{
//and result stored in result variable
return result;//returning result
}
