#include<stdio.h>
int main()
{
int i,j,s,b[10];
s=b[0];
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
for(j=0;j<10;j++)
{
if(b[j]<s)
{
s=b[j];
}
}
printf("\n the values is",s);
}
