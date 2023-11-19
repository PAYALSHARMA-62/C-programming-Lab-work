// Title of program 
// program to search an element in an array using linear search
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int arr[30];
int num,ele,found=0,i;
// output statement
printf("enter the number of elements");
// input statement
scanf("%d",&num); 
// output statement
printf("enter the elements");
// condition to sort an array
for(i=0;i<num;i++)
{
// input statement
scanf("%d",&arr[i]);
}
// output statement
printf("enter the elements to search");
scanf("%d",&ele);
for(i=0;i<num;i++)
{
if(arr[i]==ele)
{
// output statement
printf("element found at the index %d element=%d\n",i,ele);
found=1;
break;
}
}
if(!found)
{
// output statement
printf("element not found in the array");
}
}
