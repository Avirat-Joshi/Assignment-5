#include <stdio.h>
int main()
{
    int a, b;
    printf("Dividend= ");
    scanf("%d", &a);
    printf("Divisor= ");
    scanf("%d", &b);
    int remainder = 0, quotient = 0;
    if ((a >= 0 && b > 0))
    {
        while (a >= b)
        {
            a -= b;
            quotient++;
        }
    }
    if ((a <= 0 && b < 0))
    {
        while (a <= b)
        {
            a -= b;
            quotient++;
        }
    }
    if ((a <= 0 && b > 0))
    {
        while (a+b<0)
        {
            a += b;
            quotient--;
        }
    }
    if ( (a >= 0 && b < 0))
    {
        while (a+b>0)
        {
            a += b;
            quotient--;
        }
    }
    remainder = a;
    printf("\nQuotient= %d", quotient);
    printf("\nRemainder= %d", remainder);
    return 0;
}