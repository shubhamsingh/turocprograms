/*  
 *
 *
 */
#include<stdio.h>
#include<conio.h>
void prime(int num);
void main ()
{
int num;
clrscr();
printf("enter num\n");
scanf("%d",&num);
prime (num);
getch();
}
void prime(int num)
{
int i=2;
while(num!=1)
{
  if(num%i==0)
  {
    printf("%d\n",i);
    num=num/i;
    i=2;
   }
     i++;
}
}