#include<stdio.h>
void main()
{
int a[50],min,max,i,n;
printf("\n enter the no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
else if(a[i]>max)
{
max=a[i];
}
}
printf("\n the max no is:=%d",max);
printf("\n the mini no is:=%d",min);
}
