#include <stdio.h>
void main() 
{	
   int a,b,i;
   char c;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&a,&c,&b);
       if(i%2==0)
       {
           printf("%d\n",(a/b));
       }
       else
       {
           printf("%d\n",(a%b));
       }
   }

}
