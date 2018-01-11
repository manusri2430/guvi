#include<stdio.h>
void main()
{
int n,k;
printf("enter the numbers");
scanf("%d%d",&n,&k);
int n[100];
printf("enter the array values");
scanf("%d",&n[100]);
for(int i=0;i<=k;i++)
{
n=i+(i+1);
}
printf("answer",n);
}
