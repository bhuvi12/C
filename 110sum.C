#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
printf("\n enter the num");
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum+i;
}
printf("\n the result is",sum);
getch();
}
