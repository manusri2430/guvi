#include<stdio.h>
int main()
{
int z=0,y=1,x,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
x=z+y;
z=y;
y=x;
printf("%d%d",z,y);
return 0;
}
