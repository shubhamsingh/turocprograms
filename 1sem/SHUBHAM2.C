#include<stdio.h>
#include<conio.h>
void main ()
{
char *a;
char arr[20]="54875hhfgiureh332";
clrscr();
a=arr;
while(*a=>48 && *a<=58)
{
printf("%c",*a);
a++;
}
getch();
}