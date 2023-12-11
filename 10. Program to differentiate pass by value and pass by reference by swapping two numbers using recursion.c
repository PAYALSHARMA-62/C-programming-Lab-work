// Title of program
// program to differentiate passs by value and pass by reference by swapping two numbers using recursion
// header file
#include<stdio.h>
// function declaration
void main()
{
// Variable declaration
int a=10,b=20;
void swap(int,int);
void swap1(int*,int*);
// output statement
printf("Before swapping");
printf("A=%d\t B=%d\n",a,b);
// function call
swap(a,b);
// output statement
printf("After swapping");
printf("A=%d\t B=%d\n",a,b);
swap1(&a,&b);
printf("after swapping");
printf("A=%d\t B=%d\n",a,b);
}
void swap(int x,int y)
{
int t=x;
x=y;
y=t;
}
void swap1(int*x,int*y)
{
int t=*x;
*x=*y;
*y=t;
}n