#include<stdio.h>
#include<conio.h>
void main()
{
int b,c,i,z;
clrscr();
printf("enter any number");
scanf("%d",&c);
z=c;
for(i=1;i<=z;i++)
{
printf("enter number");
scanf("%d",&b);
if(b<c)
c=b;
}
printf("smallest no =%d",c);
getch();
}