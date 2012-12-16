#include<stdio.h>
#include<conio.h>
long power(int x,int y);
void main()
{
int x,y;
long pow;
clrscr();
printf("enter two number\n");
scanf("%d%d",&x,&y);
pow=power(x,y);
printf("%d",pow);
getch();
}
long power(int x,int y)
{
int i;
long p=1;
for(i=1;i<=y;i++)
p=p*x;
return(p);
}