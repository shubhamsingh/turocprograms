#include<stdio.h>
#include<conio.h>
void main()
{
int c,i,j;
clrscr();
printf("enter the choice");
scanf("%f",&c);
if(c==1)
for(i=1;i<=5;i++)
    {
    for(j=1;j<i;j++)
    printf(" ");
    for(j=1;j=
5-i;j++)
    printf("*");
    for(j=1;j<5-i;j++)
    printf("*");
    for(j=1;j<i;j++)
    printf("*");
    printf("\n");
}
getch();
}