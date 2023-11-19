// title of program
// program to check if a number is amstrong or not using while loop
// header file
#include<stdio.h>
#include<math.h>
// function heading
void main()
{
// variable declaration
int number,originalnumber,remainder,result=0,n=0;
// output statement
printf("enter the number");
// input statement
scanf("%d",&number);
originalnumber=number;
// condition for while loop
while(originalnumber!=0)
{
// input statement conditions
originalnumber/=10;
++n;
}
originalnumber=number;
while(originalnumber!=0)
{
remainder=originalnumber%10;
result+=pow(remainder,n);
originalnumber/=10;
}
// input statement if condition
if(result==number)
{
// output statement
printf("%d is an amstrong number\n",number);
}
else
{
// output statement
printf("%d is not an amstrong number\n",number);
}
}