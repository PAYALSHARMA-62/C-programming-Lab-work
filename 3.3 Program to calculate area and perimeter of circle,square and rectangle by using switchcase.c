// Title of program
// Program to calculate area and perimeter of circle,square and rectangle by using switch case
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int ch;
float r,l,b,s,area1,peri1,area2,peri2,area3,peri3;
// output statement
printf("1.circle\n 2.square\n 3.rectangle\n enter your choice");
// input statement
scanf("%d",&ch);
// condition for switch case
switch(ch)
{
case 1:
// output statement 
printf("enter the radius");
// input statement
scanf("%f",&r);
// input statement formula used
area1=3.14*r*r;
peri1=2*3.14*r;
// output statement for area of circle
printf("area of circle:%.2f\n",area1);
// output statement for peri of circle
printf("perimeter of circle:%.2f\n",peri1);
break;
case 2:
// output statement
printf("enter the side");
// input statement
scanf("%f",&s);
// input statement formula used
area2=s*s;
peri2=4*s;
// output statement for area of square
printf("area of square:%.2f\n",area2);
// output statement for peri of square
printf("perimeter of square:%.2f\n",peri2);
break;
case 3:
// output statement
printf("enter the length and breadth");
// input statement
scanf("%f%f",&l,&b);
// input statement formula used
area3=l*b;
peri3=2*(l+b);
//output statement for area of rectangle
printf("area of rectangle:%.2f\n",area3);
// output statement for peri of rectangle
printf("perimeter of rectangle:%.2f\n",peri3);
default:
// output statement
printf("enter your choice");
}
}
