#include <stdio.h>
long long isPerfect(long long);
int main(void)
{
    long long number;
    printf("enter number\n");
    scanf("%lld", &number);
    for (long long i = 1; i <= number; i++)
    {
        if (isPerfect(i))
        {
            printf("%lld ", i);
        }
    }

    return 0;
}

long long isPerfect(long long n)
{
    long int sum = 0, isPerfect = 0;
    for (long int i = 1; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        isPerfect = 1;
    }

    return isPerfect;
}