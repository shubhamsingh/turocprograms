#include<stdio.h>
#include<conio.h>
void main()
{
int no,power,amt;
float c;
printf("enter the custmer number&power consumed");
scanf("%d%d",&no,&power);
if(power<=200)
{
c=0.5*power;
printf("paid amount=%f",c);
}
else if(power>200&&power<=400)
{
c=100+(power-200)*0.65;
printf("paid amount=%f",c);
}
else if(power>=400&&power<600)
{
c=230+(power-400)*0.80;
printf("paid  amount=%f",c);
}
getch();
}