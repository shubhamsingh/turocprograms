#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,k,s=3;
clrscr();
for(i=1;i<=4;i++)
   {
   for(j=1;j<=s;j++)
   {
   printf(" ");
   }
   s--;
   for(k=1;k<=2*i-1;k++)
	 {
  printf("*");
  }
  printf("\n");
  }
  getch();
  }