#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter the number");
for(i=0;i<n;i++)
{
if(i%n==0)
{
c=c+1;
}
}
if(c==2)
{
printf("it is prime");
}
else
{
printf("it is composite");
}
}
