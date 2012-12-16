#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,r,ar,pr;
float ac,cc;
clrscr();
printf("enter l,b,r");
scanf("%d%d%d",&l,&b,&r);
ar=l*b;
pr=2*(l+b);
ac=3.14*r*r;
cc=3.14*2*r;
printf("ar=%d,pr=%d,ac=%f,cc=%f",ar,pr,ac,cc);
getch();
}
