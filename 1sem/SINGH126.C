#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum=0;
clrscr();
for(i=1;i<=30;i++)
{
if(i%2==0)
sum=sum+i;
}
printf("%d",sum);
getch();
}