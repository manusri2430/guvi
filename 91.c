#include<stdio.h>
void main()
{
int l,h,b,a,v;
printf("enter length,height,breath");
scanf("%d\t%d\t%d",&l,&b,&h);
a=2*(l*b)+2*(b*h)+2*(l*h);
v=l*b*h;
printf("area %d",a);
printf("volume %d",v);
}
