#include<stdio.h>
#include<conio.h>
int power(int a,int b);
void main ()
{
int a,b;
int power;
int p;
clrscr();
printf("enter a,b");
scanf("%d%d",&a,&b);
power=p(a,b);
printf("%d",power);
getch();
}
int power(int a,int b)
{
int i=1;
while(i<=b);
i=i*a;
return(i);
}