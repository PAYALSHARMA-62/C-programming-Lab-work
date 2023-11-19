// Title of program
// Program to calculate area and perimeter of circle,square and rectangle
// Header file
#include<stdio.h>
// function heading
void main()
{ 
// variable declartion
 float r;
// output statement
 printf("Enter the radius");
// Input statement
 scanf("%f",&r);
// Input statement to find
 float area,peri;
// formula used for circle
 area=3.14*r*r;
 peri=2*3.14*r;
// ouput statement  for circle
 printf("area of circle=%.3f\n",area);
 printf("perimeter of circle=%.3f\n",peri);
// variable declaration for square
 float s;
// output statement for square
 printf("Enter the side");
// Input statement
 scanf("%f",&s);
// Input statement formula used
 area=s*s;
 peri=4*s;
// output statement for square
 printf("area of square=%f\n",area);
 printf("peri of square=%f\n",peri);
// variable declaration for rectangle
 float l,b;
// output statement for rectangle
 printf("Enter the length and breath");
// Input statement for rectangle
 scanf("%f%f",&l,&b);
// Input statement formula used
 area=l*b;
 peri=2*(l+b);
// output statement for rectangle
 printf("area of rectangle=%f\n",area);
 printf("perimeter of rectangle=%f\n",peri);
}
