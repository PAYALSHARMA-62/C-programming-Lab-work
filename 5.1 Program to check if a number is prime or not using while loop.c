// title of program
// program to check if a number is prime or not using a while loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int i,n=2,a,prime=0;
// output statement
printf("enter the number");
// input statement
scanf("%d",&i);
while(n<i)
{
// input statement if conditions
if(i%n==0)
{
prime++;
}
n++;
}
if(prime==0)
{
// output statement
printf("this number is prime");
}
else
{
// output statement
printf("this number is not prime");
}
}