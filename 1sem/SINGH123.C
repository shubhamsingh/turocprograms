#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=1,m=1;
clrscr();
printf("enter any base");
scanf("%d",&i);
printf("enter any power");
scanf("%d",&j);
do
{
m=m*i;
k++;
}
while(k<=j);
printf("%d",m);
getch();
}