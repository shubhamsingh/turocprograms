#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,n,p;
clrscr();
printf("enter the number");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 for(j=1;j<=n-i;j++)
	   printf(" ");
	   p=n;
	 for(j=1;j<=i;j++)
	 {   printf("%d",p);
	 p--; }        p+=2;
	 for(j=1;j<i;j++)
	 {
	 printf("%d",p);  p++;
	 }
    printf("\n");
    }
getch();
}