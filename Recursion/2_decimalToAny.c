#include <stdio.h>
void decimalToBase(int, int);
void main(void)
{
    int number, base;
    printf("enter number,base : ");
    scanf("%d,%d", &number, &base);
    decimalToBase(number, base);
    printf("\n");
}

void decimalToBase(int num, int base)
{
    int tem;
    if (num == 0)
        return;
    else
    {
        tem = num % base;
        decimalToBase(num / base, base);
        if (base == 16 && tem > 9)
        {
            printf("%c", (tem + 55));
        }
        else
        {
            printf("%d", tem);
        }
    }
}