#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,a,b,k,j;
clrscr();
printf("enter your choice\n");
scanf("%d",&i);
switch(i)
{
case 1:
printf("\enter two number");
scanf("%d%d",&a,&b);
printf("%d",a+b);
break;
case 2:
printf("\enter two number");
scanf("%d%d",&a,&b);
printf("%d",a-b);
break;
case 3:
printf("\enter two number");
scanf("%d%d",&a,&b);
printf("%d",a*b);
break;
case 4:
printf("\enter two number");
scanf("%d%d",&a,&b);
printf("%d",a/b);
break;
case 5:
printf("\enter two number");
scanf("%d%d",&a,&b);
k=a;
for(j=1;j<b;j++)
a=k*a;
printf("%d",a);
break;
case 6:
exit(0);
}
printf("enter your choice\n");
scanf("%d",&i);
getch();
}