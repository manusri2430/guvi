#include<stdio.h>
int main()
{
int a[10],i,n,t,j,k;
printf("enter the range\n");
scanf("%d",&n);
scanf("%d",&k);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2!=0)
    {
        t++;
    }
    if(t==k)
    {
        printf("%d",a[i]);
        break;
    }
}return 0;
}
