
// title of program
// Program to calculate factorial of a number using a for loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int number,i;
unsigned long long factorial=1;
// output statement
printf("enter the positive  number");
// input statement
scanf("%d",&number);
// input statement for if condition
if(number<0)
{
// output statement
printf("error:factorial is not defined for negative number\n");
}
else
{
// input statement condition for loop
for(i=1;i<=number;++i)
{
    // input statement multiply factorial by current number
factorial*=i;
}
// output statement
printf("factorial of %d=%llu\n", number,factorial);
}
}