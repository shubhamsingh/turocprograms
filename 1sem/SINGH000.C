#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
int arr[size],low,up,mid,key;
clrscr();
printf("enter element stored in order\n");
for(i=0;i<size;i++)
scanf("%d"size[i]);
printf("enter element to be search");
scanf("%d",&key);
low=0;
up=size-1;
while(low<=up)
{
mid=(low+high)/2;
if(key arr[mid])
up=mid-1;
else if(key==arr[mid])
{
printf("element found at position %d",mid+1);
break;
}
else if(key>arr[mid])
low=mid+1;
else if(low>up)
printf("key element is not found");
}
getch();
}
