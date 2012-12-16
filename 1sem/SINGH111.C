#include<stdio.h>
#include<conio.h>
void main()
{
int i,j=1,n,sum=0,k;
clrscr();
printf("sum of sqare press 1\nor sum of cube press 2\n");
scanf("%d",&k);
printf("enter the natural number");
scanf("%d",&n);
if(k==1)
  { for(i=1;i<=n;i++)
      { j=i*i;
	 sum=sum+j;  }
	 printf("squre=%d",sum);
   }
if(k==2)
  {  for(i=1;i<=n;i++)
       { j=i*i*i;
	 sum=sum+j;     }
	 printf("cube=%d",sum);
   }
getch();
}