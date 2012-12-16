#include <stdio.h>
#include <conio.h>
void main ()
{
int a,b,c;
clrscr();
printf("enter the two num");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum of two number is %d\n",c);
c=a*b;
printf("product of two num is %d\n",c);
c=a-b;
printf("diff of two number is %d\n",c);
getch();
}