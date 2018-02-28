#include<stdio.h>
int main()
{
int l,h,w,vol,sa;
printf("\n enter the values");
scanf("%d%d%d",&l,&h,&w);
vol=l*w*h;
sa=2*l*h+2*l*w+2*h*w;
printf("%d%d\n",vol,sa);
return 0;
}
