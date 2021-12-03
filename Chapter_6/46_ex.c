#include <stdio.h>
int isAmicable(int);
int main(void)
{
    int number;
    printf("enter number\n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (isAmicable(i))
            printf("%d is amicable number\n", i);
    }

    return 0;
}

int isAmicable(int n)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            sum1 = sum1 + i;
        }
    }

    for (int j = 1; j <= (sum1 / 2); j++)
    {
        if (sum1 % j == 0)
        {
            sum2 = sum2 + j;
        }
    }
    // printf("%d sum1, %d sum2\n", sum1, sum2);
    if (n == sum2)
        return 1;
    return 0;
}