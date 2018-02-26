#include<stdio.h>
void main()
{
int i,n,a[100],max=0;
max=a[0];
printf("\n enter the element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n%d%d",a[i],i);
}
}
