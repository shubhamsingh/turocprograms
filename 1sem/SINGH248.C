#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=10;i++)
{
print("\n");
printf("enter working hours");
scanf("%d",&j);
if(j>40)
{
k=(j-40)*12;
printf("over time=%d",k);
}
else
printf("working hors less then 40");
}
getch();
}