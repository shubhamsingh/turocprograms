#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=0;i<=9;i+=3)
{
for(j=1;j<=20-i;j++)
printf("*");
printf("\n");
}
for(i=0;i<=4;i+=2)
{
for(j=1;j<=9-i;j++)
printf("*");
printf("\n");
}
for(i=0;i<=2;i++)
{
for(j=1;j<=3-i;j++)
printf("*");
printf("\n");
}
getch();
}