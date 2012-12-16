#include<stdio.h>
#include<conio.h>
void primefact (int a);
void main()
{
int i,prime;
clrscr();
printf("enter the number");
scanf("%d",i);
primefact (i);
getch();
}

void primefact(int a)
{
int n=2;
while (a!=1)
{
if(a%n==0)
{
printf("%d",a);
a=a/n;
n=2;
}
else
n++;
}
}

