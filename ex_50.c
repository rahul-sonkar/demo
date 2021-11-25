#include <stdio.h>
void product(int, int);
void divident(int, int);
void quotient(int, int);
int main(void)
{
    int num1, num2;
    printf("enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);
    product(num1, num2);
    divident(num1, num2);
    quotient(num1, num2);
    return 0;
}

void product(int a, int b)
{
    int ans = 0;
    for (int i = 0; i < b; i++)
    {
        ans = ans + a;
    }
    printf("product is %d \n", ans);
}

void divident(int a, int b)
{
    int count = 0;
    while (a >= b)
    {
        a = a - b;
        count++;
    }
    printf("divident is %d\n", count);
}

void quotient(int a, int b)
{
    while (a >= b)
    {
        a = a - b;
    }
    printf("quotient is %d\n", a);
}