
// title of program
// Program to print fibonacci sequence using for loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int i,n,a=0,b=1,nextnumber;
// output statement
printf("enter the number");
// input statement
scanf("%d",&n);
// output statement
printf("fibonacciseries");
// input statement condition for loop
for(i=1;i<=n;++i)
{
// output statement
printf("%d\n",a);
nextnumber=a+b;
// input statement
a=b;
b=nextnumber;
}
}