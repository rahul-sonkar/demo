#include <stdio.h>
void decimalToBinery(int);
void main(void)
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    decimalToBinery(n);
    printf("\n");
}

void decimalToBinery(int n)
{
    int tem;
    if (n == 0)
        return;
    else
    {
        tem = n % 2;
        decimalToBinery(n / 2);
        printf("%d", tem);
    }
}