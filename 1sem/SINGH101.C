#include<stdio.h>
#include<conio.h>
void main()
{
int sal;
clrscr();
printf("enter the salary");
scanf("%d",&sal);
if(sal>1000&&sal<=2000)
printf("Grade A");
else if(sal>2000&&sal<=3000)
printf("Grade B");
else
printf("Grade C");
getch();
}