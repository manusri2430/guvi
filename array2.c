#include<stdio.h>
#include<math.h>
void main()
{
int a[100],n,i,c;
printf("enter the array size");
scanf("%d",n);
printf("element of the array",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
c=a[0];
for(i=1;i<n;i++)
{
if(c<a[i])
c=a[i];
}
printf("largest element %d",c);
}
