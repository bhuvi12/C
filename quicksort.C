#include<stdio.h>
void main()
{
int i,j,t,n,a[100];
printf("\n enter the element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("%d\n",a[n%2]);
}
}
