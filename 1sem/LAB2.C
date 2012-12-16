//lab 2
#include<stdio.h>
#include<conio.h>
void main()
{
int i,key;
int even[30];
for(i=0;i<30;i++)
{
even[i]=rand()%50;
}
printf("enter num");
scanf("%d",&key);
i=0;
while(key!=even[i]&&i<30);
{
i++;
}
if(i>0&&i<30)
{
printf("element found at%d",i);
}
else
{
printf("element not found");
}
getch();
}