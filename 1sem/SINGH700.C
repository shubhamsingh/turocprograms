#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={3,5,4,4,5,4,3}; //decleration of array a
int b[3][3]={4,3,3,6,7,2,4}; //decleration of array b
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
   a[j][i]=b[i][j];
}
printf("\n");
}
for(i=0;i<3;i++)       //print required array it is required
{
for(j=0;j<3;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
getch();
}