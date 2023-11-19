// title of program
// program to check whether the alphabet is a vowel or constant
// header file
#include<stdio.h>
// function heading
void main()
{ 
// variable declaration
char ch;
//output statement
printf("enter the char");
//input statement
scanf("%c",&ch);
// input statement for if else
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
// output statement
printf("vowel");
}
else
{
// output statement
printf("consonant");
}
}