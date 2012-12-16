//lab 17 3
#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i,j;
int freq[5]={0};
char row[]={'a','e','i','o','u'};
clrscr();
printf("enter any world");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
for(j=0;j<50;j++)
{
if(str[i]==row[j])
{
freq[j]++;
}
}
}
for(j=0;j<5;j++)
printf("%d\t%c\n",freq[j],row[j]);
getch();
}