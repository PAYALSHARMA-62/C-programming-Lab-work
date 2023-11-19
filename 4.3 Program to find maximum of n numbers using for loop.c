// titleof program
// program to find maximum of n numbers using for loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int i,n;
float num,maximum;
// output statement
printf("enter the number of elements");
// input statement
scanf("%d",&n);
maximum=-999999999;
// condition of for loop
for(i=0;i<n;++i)
{
// output statement
printf("enter number");
// input statement
scanf("%f",&num);
// condition of if statement
if(num>maximum)
{
maximum=num;
}
}
// output statement
printf("Maximum number is=%.2f\n",maximum);
}