#include<stdio.h>
#include<conio.h>
void main()
{
int i=1;
char c='y';
clrscr();
while(c!='n')
{
printf(" \nenter y or n\n");
c=getch();
if(c=='n')
break;
printf("%d",i);
i++;
}
getch();
}