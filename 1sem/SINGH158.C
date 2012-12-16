#include(stdio.h)
#include<conio.h>
void main()
{
int a,k,i,b,sum=0;
for(a=2;a<=500;a++)
{k=a;
for(i=a;i>0;i=i/10)
{
b=i%10;
sum=sum+(b*b*b);
}
if(sum==k)
printf("%d\n",k);
}
getch();
}