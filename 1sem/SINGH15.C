#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
clrscr();
for(i=0;i<4;i++)
{
 for(j=0;j<6;j++)
 {
 if(i==0 || j==0 || i==(h-1) || j==(l-1))
 printf("* ")   ;
 else
 printf("  ");
 }
 printf("\n") ;
}
getch();
return 0;
}