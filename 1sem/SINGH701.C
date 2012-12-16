#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={3,2,4,2,1,4,3,1}; //decleration of array a
int b[3][3]={1,3,1,0,7,2,2,}; //decleration of array b
int i,j,c[3][3];
clrscr();
for(i=0;i<3;i++)  //loop for print array1 but not reqired
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
printf("\n");
for(i=0;i<3;i++)    //loop for printf array2 but not reqired
{
for(j=0;j<3;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)       //loop for short along digonal
{                      //interchange row & column
for(j=0;j<3;j++)
{
  c[i][j]=a[i][j]*b[i][j];  //for adding array use +
}                           //change here to singh700.c
printf("\n");
}
for(i=0;i<3;i++)       //print required array it is required
{
for(j=0;j<3;j++)
{
printf("%d",c[i][j]);  //change here to singh700.c
}
printf("\n");
}
getch();
}