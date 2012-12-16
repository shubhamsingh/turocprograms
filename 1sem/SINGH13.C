#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max_size 100
int myrand();
void main()
{
int i,size;
float marks [max_size];
float total=0;
clrscr();
//size=myrand();
printf("enter size");
scanf("%d",&size);
for(i=1;i<=size;i++)
{
marks[i]=myrand();
total=total+marks[i];
}
printf("%f,%f",total,total/size);
getch();
}
int myrand()
{
int i=1+rand()%6;
printf("value of i is %d\n",i);
return i;
}