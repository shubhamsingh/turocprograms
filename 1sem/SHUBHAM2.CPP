#include<stdio.h>
#include<conio.h>
int main()
{
float b,dr,hr,gs;
clrscr();
printf("enter your basic salary\n");
scanf("%f",&b);
dr=.4*b;
hr=.2*b;
gs=b+dr+hr;
printf("gr salary is %f",gs);
getch();
return 0;
}