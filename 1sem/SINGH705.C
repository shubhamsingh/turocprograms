#include<stdio.h>
#include<conio.h>
void main ()
{
int a[3];
int i;
clrscr();
scanf("%d",&a[i]);
printf("%p ,%p ,%p",a,&a,&a[2]);  //change inside [] (0,1,2)only
				  //every time see new result
getch();                          //enter num (0,1,2)
}                                 //result is +2 for last digit