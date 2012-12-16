#include<stdio.h>
#include<conio.h>
int main()
{
float a,s,d,f,g,sum;
clrscr();
printf("enter the number in 5 subject");
scanf("%f%f%f%f%f",&a,&s,&d,&f,&g);
sum=(a+s+d+f+g)/5;
printf("%.3f",sum);
getch();
return 0;
}
