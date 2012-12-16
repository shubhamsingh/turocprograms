#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3]={1,2,1,0,2,1,1}; //decleration of array a
int b[3][3]={2,0,2,2,0,2,1}; //decleration of array b
int i,j,k,c[3][3];
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
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)           //take another for loop for *
{
c[i][j]+=a[i][k]*b[k][j];  //main part of program
}
}
printf("\n");
}
for(i=0;i<3;i++)       //print required array it is required
{
for(j=0;j<3;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
getch();
}