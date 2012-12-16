#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int i,j;
clrscr();
do
{
printf("enter j for cont");
scanf("%d",j);
printf("enter seed");
scanf("%d",&i);
srand(time(NULL));
for(i=1;i<=20;i++)
{
printf("%10d",-50+rand()%0);
if(i%5==0)
printf("\n");
}
}
while(j!=0);
getch();
}