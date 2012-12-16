//lab 17 1
#include<stdio.h>
#include<conio.h>
void main()
{
int num[5],arr[5],i,j,k,temp;
clrscr();
printf("enter 5 number");
for(i=0;i<5;i++)
{
scanf("%d",&num[i]);
}
printf("enter 5 number in arr");
for(j=0;j<5;j++)
{
scanf("%d",&arr[j]);
}
for(k=0;k<5;k++)
{
temp=num[k];
num[k]=arr[k];
arr[k]=temp;
}
for(k=0;k<5;k++)
{
printf("new number=%d\t",num[k]);
printf("new arr=%d\n",arr[k]);
}
getch();
}
