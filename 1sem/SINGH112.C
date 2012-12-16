#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,n,sum=0;
clrscr();
printf("sum of sqare press 1\nor sum of cube press 2\n");
scanf("%d",&k);
printf("enter the natural number");
scanf("%d",&n);
if(k==1)
{ for(i=1;i<=n;i++)
     sum=sum+i*i;
      printf("sum of squres=%d",sum); }
if(k==2)
{  for(i=1;i<=n;i++)
       sum=sum+i*i*i;
       printf("sum of cubes=%d",sum); }
getch();
}