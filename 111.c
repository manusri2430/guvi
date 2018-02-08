#include<stdio.h>
void main()
{
int n,c=0,r;
printf("enter the num\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
c=c+1;
n=n/10;
}
printf("result is %d",c);
}
