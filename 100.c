#include<stdio.h>
int main()
{
int n,i=1,r;
printf("enter values");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    i=i*r;
    n=n/10;
}
printf("%d",i);



return 0;
}
