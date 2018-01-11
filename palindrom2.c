#include <stdio.h>
int main()
{
    int n, sum = 0, r;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while( n!=0 )
    {
        remainder = n%10;
        sum = sum*10 + r;
        n /= 10;
    }

    
    if (sum==n)
        printf("%d is a palindrome.", n);
    else
        printf("%d is not a palindrome.", n);
    
    return 0;
}
