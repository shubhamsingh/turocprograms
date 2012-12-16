#include<stdio.h>
#include<conio.h>
void main()
{
int i,k;
clrscr();
for(i=1;i<=5;i++)
{
for(k=1;k<=6-i;k++);
printf("%d",i);
printf("\n");
}
getch();
}