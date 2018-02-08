#include<stdio.h>
void main()
{
int n,k,i ,a[50],c=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
if(a[i]==k)
{
c=c+1;
}
}
printf("number of repitions:%d",c);
}
