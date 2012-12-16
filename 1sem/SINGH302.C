#include<stdio.h>
#include<conio.h>
void leapyear (int year);
void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
leapyear (year);
getch();
}

void leapyear (int year)
{
if(year%4==0&&year%100!=0||year%400==0)
printf("year is leap year");
else
printf("year is not leap year");
}


