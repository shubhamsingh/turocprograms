#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,k;
for(i=1;i<=9;i=i+2)
    {
    for(j=1;j<=i;j+=2)
    {
    printf("%d",j);
    }
    printf("\n");
    }
    getch();
    }
