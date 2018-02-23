#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],temp,n;
printf("\n enter the size of element");
scanf("%d",&n);
printf("\n enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(i=j+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\n elements is assending order");
for(i=0;i<n;i++)
{
printf("\n",a[i]);
}
getch();
}
