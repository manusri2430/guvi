#include <stdio.h>
#include <math.h>
 
void main()
{
    int n, sum = 0, rem , cube,k;
 
    printf ("enter a number");
    scanf("%d", &n);
    printf("enter the number 2");
    scanf("%d",k);
    for(int i=k+1;i<n;i++)
    {
    
    while (n != 0)
    {
        rem = n % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = n / 10;
    }
    }
    printf("armstrong numbers %d",i);
}
