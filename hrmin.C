#include<stdio.h>
#include<conio.h>
void main()
{
int h,m,hr1,hr2,min1,min2;
printf("\n enter the first time period");
scanf("%d%d",&hr1,&min1);
printf("\n enter the second time period");
scanf("%d%d",&hr2,min2);
h=hr1-hr2;
m=min1-min2;
printf("\n the result is",h,m);
getch();
}
