#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=1,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
j=j*i;
printf("%d",j);
getch();
}