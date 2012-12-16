#include<stdio.h>
#include<conio.h>
void main()
{
int c,d;
int temp;
clrscr();
printf("enter the value of c,d");
scanf("%d%d",&c,&d);
temp=c;
c=d;
d=temp;
printf("%d%d",c,d);
getch();
}