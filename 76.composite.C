#include<stdio.h>
void main()
{
int i,n,s;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%i==0)
{
s++;
}
if(s==2)
{
printf("\n the number is prime");
}
else
{
printf("\n composite");
}
}
}
