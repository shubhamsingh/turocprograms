#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,a,b,f;
float sum=0;
clrscr();
printf("enter the value of x");
scanf("%d",&x);
for(a=1;a<14;a+=2)
{
f=1;
for(b=a;b>1;b--)
f*=b;
sum=sum+(pow(x,a)/f);
}
printf("sum=%f",sum);
getch();
}