//lab 17 2
#include<stdio.h>
#include<conio.h>
void main()
{
int num[10];
int i,j,temp;
clrscr();
printf("enter 10 number");
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<9;j++)
{
if(num[j]>num[j+1])
{
temp=num[j];
num[j]=num[j+1];
num[j+1]=temp;
}
}
}
for(i=0;i<10;i++)
{
printf("%d\n",num[i]);
}
getch();
}
