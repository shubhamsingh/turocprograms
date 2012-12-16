#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
float x,term=1,sum=0;
clrscr();
printf("enter no. of term,float value");
scanf("%d%f",&n,&x);
for(i=1;i<=n;i++)
{
term=term*x/i;
sum=sum+term; }
printf("%f",sum);

getch();
}

