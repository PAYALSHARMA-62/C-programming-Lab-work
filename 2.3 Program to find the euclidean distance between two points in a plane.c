// Title of program
//Program to find euclidean distance between two points in a plane
// Header file
#include<stdio.h>
#include<math.h>
// function heading
void main()
{
// variable declaration
 int a,b,c,d;
// output statement
 printf("Enter the values");
// Input statement
 scanf("%d%d%d%d",&a,&b,&c,&d);
// Input statement to find 
 int distance;
// Input statement formula used 
 distance=sqrt((c-a)*(c-a)+(d-b)*(d-b));
//output statement
 printf("The distance is=%d",distance);
}