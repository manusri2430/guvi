#include<stdio.h>
int main()
{
char s[100]={"laptop"};
int i,k,c;
printf("enter the k values");
scanf("%d",&k);

for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}
