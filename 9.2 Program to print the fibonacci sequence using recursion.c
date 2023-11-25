// Title of program 
// Program to print the fibonacci sequence using recursion
// header file
#include<stdio.h>
int fib(int n)
{
// if statement
if(n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}
void fib1(int n,int i)
{
if(i<n)
{
// output statement
printf("%d",fib(i));
fib1(n,i+1);
}
}
int main()
{
int n;
// output statement
printf("enter the number of terms");
// input statement
scanf("%d",&n);
// output statement
printf("Fibonacci sequence");
fib1(n,0);
}