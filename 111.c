#include<stdio.h>
void main()
{
int n,c=0;
printf("enter the num\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
c=c++;
n=n/10;
}
printf("result is %d",c);
}
