#include <stdio.h>
double series(int);
int main(void)
{
    int number;
    printf("enter nth number : ");
    scanf("%d", &number);
    printf("Ans is ==> %f\n", series(number));
    return 0;
}

double series(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1 / (double)(i * i);
    }
    return sum;
}