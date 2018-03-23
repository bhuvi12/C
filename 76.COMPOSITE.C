#include<stdio.h>
void main()
{
int i,a,n;
printf("\n enter the num");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if(a==0)
{
printf("\n prime number");
}
else
{
printf("\n composite ");
}
}
