#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,n=1,count;
clrscr();
while(n<=300)
{i=2;
count=0;
while(i<n)
{
if(n%i==0)
count++;
i++;
} //end inner while
if(count==0)
printf("%d is prime\n",n);
n++;
}//end outer while
getch();
}
