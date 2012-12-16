#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,k,s=3;
for(i=1;i<=4;i++)
    {
    for(j=1;j<=s;j++)
    {
    printf(" ");
    } s--;
    for(k=1;k<=i;k++)
    {
    printf("* ");
    }
    printf("\n");
    }
    getch();
    }
