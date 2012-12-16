#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,n;
clrscr();
printf("enter 4 digit num");
scanf("%d",&a);
n=a%10;
i=a/1000;
printf("%d",n+i);
getch();
}