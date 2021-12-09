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
        // printf("%d", tem);
        if (base == 16)
        {
            switch (tem)
            {
            case 10:
                printf("%c", 'A');
                break;
            case 11:
                printf("%c", 'B');
                break;
            case 12:
                printf("%c", 'C');
                break;
            case 13:
                printf("%c", 'D');
                break;
            case 14:
                printf("%c", 'E');
                break;
            case 15:
                printf("%c", 'F');
                break;
            }
        }
        else
        {
            printf("%d", tem);
        }
    }
}