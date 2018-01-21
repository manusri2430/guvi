#include<stdio.h>
#include<math.h>
void main()
{
int a=10,b=20,temp;
scanf("%d%d",&a,&b);
printf("before swaping %d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swaping",a,b);
}
