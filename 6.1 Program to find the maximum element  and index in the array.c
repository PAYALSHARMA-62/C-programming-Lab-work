// Title of program 
// program to find the maximum element and index in the array
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int arr[120];
int n=0,i=0,max=0,index;
// output statement
printf("enter the number of elements of array");
// input statement
scanf("%d",&n);
// condition for for loop
for(i=0;i<n;i++)
{
// output statement
printf("arr[%d]=",i);
// input statement
scanf("%d",&arr[i]);
}
max=arr[0];
// condition to find maximum element and index in the array
for(i=1;i<n;i++)
{
(arr[i]>max);
max=arr[i];
index=i;
}
// output statement
printf("maximum element in the arrray=%d\n",max);
// output statement
printf("index in the array=%d\n",index);
}