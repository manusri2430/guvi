#include<stdio.h>
#include<math.h>
void main()
{
int a=10,b=20,temp;
scanf("%d%d",&a,&b);
printf("before swaping %d %d",a,b);
temp=a;
a=b;
b=temp;
printf("after swaping",a,b);
}
