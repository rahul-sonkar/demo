#include <stdio.h>
int sumPdivisors(int);
int main(void)
{
    int number;
    printf("enter number\n");
    scanf("%d", &number);
    printf("sum is %d\n", sumPdivisors(number));
    return 0;
}

int sumPdivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            printf("%d ", i);
        }
    }
    return sum;
}