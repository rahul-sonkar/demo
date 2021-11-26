#include <stdio.h>
void twinPrime(int);
int isPrime(int);
int main(void)
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);
    twinPrime(number);
    return 0;
}

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void twinPrime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i - 2))
                printf("twins prime [%d,%d]\n", i - 2, i);
        }
    }
}