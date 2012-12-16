#include <stdio.h>
#include <conio.h>
int main()
{
int l=6;
int h=4;
int i,j;
clrscr();
for(i=0;i<h;i++)
{
for(j=0;j<i;j++)
{
if(i==0||j==0||i==(h-1)||j==(l-1))
printf("* ");
}
printf("\n");
}
getch();
return 0;
}
