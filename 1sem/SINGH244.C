#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,n;
clrscr();
printf("enter 5 digit num");
scanf("%d",&a);
for(i=1;i<=5;i++)
    {
	n=a%10;
	a=a/10;
printf("%d",n);
}
getch();
}