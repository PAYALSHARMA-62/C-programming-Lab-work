// title of program
// program to perform matrix multiplication
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
// output statement
printf("\n enter the first matrix");
// condition for for loop
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
// output statement
printf("enter the elements mat1[%d][%d]",i,j);
// input statement
scanf("%d",&mat1[i][j]);
}
}
// output statement
printf("\n enter the second matrix");
// condition for for loop
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    //output statement
printf("enter the elements mat2[%d][%d]",i,j);
// input statement
scanf("%d",&mat2[i][j]);
}
}
// output statement
printf("print the first matrix\n");
// condition for for loop
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
// output statement
printf("%d\t",mat1[i][j]);
}
// output statement
printf("\n");
}
// output statement
printf("print the second matrix\n");
// condition for for loop
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
//output statement
printf("%d\t",mat2[i][j]);
}
// output statement
printf("\n");
}
//output statement
printf("matrix multiplication");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
mat3[i][j]=0;
for(k=0;k<3;k++)
{
mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
}
}
}
// output statement
printf("\n the third matrix is");
printf("print the third/multiplication matrix\n");
// condition for for loop
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
// output statement
printf("%d\t",mat3[i][j]);
}
//output statement
printf("\n");
}
}
