#include<stdio.h>
void main()
{
int n,k,i,a[100];
printf("enter the 2 values");
scanf("%d\t%d",&n,&k);
printf("enter array");
for(i=0;i<=n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<=n;i++)
{
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
}
}
