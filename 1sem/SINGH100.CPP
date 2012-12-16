#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{  if(i==1)
printf("******");
else
for(j=5;j>=i;j--)
printf("*");
printf("\n");
}
getch();
}