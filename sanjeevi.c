#include<stdio.h>
#include<string.h>
int main()
{
char arr[10000];
int i,length,e=0,m=0,l=0;
scanf("%s",arr);
length=strlen(arr);
if(arr[0]!='{' || arr[length-1]!='}')
e++;
for(i=1;i<length-1;i++)
{
if(arr[i]==':' && arr[i+1]=='[' && (m==0))
{
m++;
}
else if(arr[i]==']' && (m==1))
m--;
else if(arr[i]=='{' && (l==0))
l++;
else if(arr[i]=='}' && (l>0))
l--;
else if(arr[i]==',' && arr[i+1] == '{') continue;
else if(arr[i] == '[') continue;
else
e++;
}
if(e!=0 || m!=0 || l!=0)
printf("-1");
else
printf("1");
return 0;
}
