#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
int arr[size];
int low,up,mid,key,i;
int hold,j;
clrscr();
printf("enter element in stored order\n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(j=1;j<size;j++)
{
for(i=0;i<size-1;i++)
{
if(arr[i]>arr[i+1])
{
hold=arr[i];
arr[i]=arr[i+1];
arr[i+1]=hold;
}
}
}
printf("data type in ascending order\n");
for(i=0;i<size;i++)
printf("%d ",arr[i]);
printf("\n");
printf("enter the search key");
scanf("%d",&key);
low=0;
up=size-1;
while(low<=up)
{
mid=(low+up)/2;
if(key<arr[mid])
up=mid-1;
else if(key==arr[mid])
{
printf("element found%d",mid+1);
break;
}
else if(key>arr[mid])
low=mid+1;
else if(low>up)
printf("key element is not present");
}
getch();
}