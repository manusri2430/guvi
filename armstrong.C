#include <stdio.h>
#include <math.h>
 
void main()
{
    int n, sum = 0, rem , cube;
 
    printf ("enter a number");
    scanf("%d", &n);
    
    while (n != 0)
    {
        rem = n % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = n / 10;
    }
    if (sum == n)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
