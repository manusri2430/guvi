#include<stdio.h>
void main()
{
int n,k,i,a[100];
printf("enter n&k value");
scanf("%d %d",&n,&k);
printf("eniter array");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("kth value is %d",a[k-1]);
}
