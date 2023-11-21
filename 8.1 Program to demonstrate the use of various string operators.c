// Title of program
// program to demonstrate the use of various string operations
// header file
#include<stdio.h>
#include<string.h>
// function heading 
void main()
{
// variable declaration
char str1[20],str2[20],str3[20][20];
int res;
// output statement
printf("enter the string 1=\n");
scanf("%s",str1);
printf("enter the string 2=\n");
scanf("%s",str2);
printf("concatenation string is=%s",strcat(str1,str2));
res=strcmp(str1,str2);
printf("compare string result is=%d",res);
strcpy(str3,str1);
printf("first string is=%s\n",str1);
printf("third string is=%s\n",str3);
printf("\n third string lower case is=%s",strlwr(str3));
printf("\n third string upper case is=%s",strupr(str3));
}