#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,m;
clrscr();
for(i=1;i<6;i++)
{
m=1;
for(j=1;j<=3;j++)
{
m=m*i;
printf("%d",m);
}
printf("\n");
}
getch();
}
