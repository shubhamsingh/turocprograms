#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
float k;  clrscr();
printf("enter amount of mill clouth &hand loom");
scanf("%d%d",&i,&j);
if(i+j>0&&i+j<=100)
{
k=i+j-j*0.05;
printf("a p= %f",k);
}
else if(i+j>100&&i+j<=200)
{
k=i-i*0.05+j-j*0.075;
printf("a p= %f",k);
}
else if(i+j>200&&i+j<=300)
{
k=i-i*0.075+j-j*0.1;
printf("amount paid= %f",k);
}
else if(i+j>300)
{
k=i-i*0.1+j-j*0.15;
printf("p a=%f",k);
}
getch();
}