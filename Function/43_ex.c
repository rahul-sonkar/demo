#include <stdio.h>
int MDR(int);
void steps(int);
int MPresistence(int);
int prodDigits(int);
int main(void)
{
    int number;
    printf("enter number\n");
    scanf("%d", &number);
    steps(number);
    printf("(MDR %d, MPersistence %d)\n", MDR(number), MPresistence(number));
    return 0;
}

int prodDigits(int a)
{
    int product = 1;
    while (a > 0)
    {
        product = product * (a % 10);
        a = a / 10;
    }
    return product;
}

int MDR(int n)
{
    while (n > 10)
    {
        n = prodDigits(n);
    }
    return n;
}

int MPresistence(int a)
{
    int count = 0;
    while (a > 10)
    {
        a = prodDigits(a);
        count++;
    }
    return count;
}

void steps(int num)
{
    do
    {
        printf("%d -> ", num);
        num = prodDigits(num);
    } while (num > 10);

    if (num < 10)
        printf("%d\t", num);
}