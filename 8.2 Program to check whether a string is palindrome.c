// Title of program 
// Program to check whether a given string is palindrome
// header file
#include<stdio.h>
#include<string.h>
// function heading
void printrev(char str[])
{
// variable declaration
int len=strlen(str);
// output statement
printf("given string");
// condition for for loop
for(int i=len-1;i>=0;i--)
{
// output statement
printf("%c",str[i]);
}
// output statement
printf("%s",strrev(str));
printf("\n");
}
int ispal(char str[])
{
int len=strlen(str);
// condition for for loop
for(int i=0;i<len/2;i++)
{
// if statement
if(str[i]!=str[len-i-1])
{
return 0;
}
}
return 1; // Palindrome
}
int main()
{
char input[100];
// output statement
printf("enter the string");
// input statement
scanf("%s",input);
// if statement
if(ispal(input))
{
// output statement
printf("%s is a palindrome",input);
}
else
{
// output statement
printf("%s is not a palindrome\n",input);
}
}