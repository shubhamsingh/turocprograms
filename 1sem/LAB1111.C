//lab 17 4
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,temp,n=0;
clrscr();
printf("enter any word");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
n++;
}
for(i=0;i<n/2;i++)
{
temp=str[i];
str[i]=str[n-1-i];
str[n-1-i]=temp;
}
printf("%s",str);
getch();
}