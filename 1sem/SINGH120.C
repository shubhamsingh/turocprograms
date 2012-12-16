#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
clrscr();
printf("enter any number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
n=n/10;
printf("%d",r);
}
getch();
}