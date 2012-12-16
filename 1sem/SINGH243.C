#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,sum=0,n,j=0,k=0;
clrscr();
printf("enter 5 digit num");
scanf("%d",&a);
for(i=1;i<=5;i++)
    {
	n=a%10;
	sum=sum+n;
	a=a/10;
     }
printf("%d\n",sum);
for(i=1;i<=2;i++)
    {
	a=sum%10;
	j=j+a;
	sum=sum/10;
    }
printf("%d\n",j);
for(i=1;i<=2;i++)
    {
	a=j%10;
	k=k+a;
	j=j/10;
    }
printf("%d",k);
getch();
}





















