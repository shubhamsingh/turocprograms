#include <stdio.h>
#include<conio.h>
void main()
{
int otp,wh; clrscr();
printf("enter working hours");
scanf("%d",&wh);
if(wh>40)
otp=wh-40;
else
otp=0;
printf("over time pay is=%d",otp*12);
getch();
}