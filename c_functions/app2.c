/* 
2. Write a C program that calls the C function you just wrote in app1.c to calcu-
late the multiplication of 3 times 5 and then print out the return value from the
function on the screen.
*/
#include <stdio.h>
#include <stdlib.h>
int multiplyNum(int , int);//function declaration or prototype
int main()
{
int num1,num2,product;//variable declaration
printf("3, 5");
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
int result=a*b;//find product of two numbers
//and result stored in result variable
return result;//returning result
}
