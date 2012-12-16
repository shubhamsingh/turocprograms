#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m=1;
clrscr();
for(i=1;i<=5;i++)
{
  for(j=5;j<=i;j--)
  printf(" ");
  for(j=1;j<=i;j++)
  printf("%d",m);
  printf("\n");
}
getch();
}