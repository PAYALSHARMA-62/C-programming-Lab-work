// title of program
// program to calculate sum of digits of a number using a while loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int number,sum=0,digit;
// output statement
printf("enter the number");
// input statement
scanf("%d",&number);
while(number!=0)
{
// input statements conditions
digit=number%10;
sum+=digit;
number/=10;
}
// output statement
printf("sum of digits=%d\n",sum);
}