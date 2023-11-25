// Title of program 
// program to calculate factorial of a number using recursion
// header file
#include<stdio.h>
int fact(int);
void main()
{
int a,fact1;
// output statement
printf("\n enter the number to calculate factorial");
// input statement
scanf("%d",&a);
fact(a);
fact1=fact(a);
// output statement
printf("factorial of %d is=%d",a,fact1);
}
int fact(int x)
{
if(x<=0)
return 1;
else
return x*fact(x-1);
}