#include <stdio.h>
void convert(int, char);
int main(void)
{
    int number;
    char unit;
    printf("enter number and unit : ");
    scanf("%d %c", &number, &unit);
    convert(number, unit);
    return 0;
}

void convert(int num, char unit)
{
    switch (unit)
    {
    case 'i':
        printf("%.2f cm\n", num * (2.54));
        break;

    case 'c':
        printf("%.2f inch\n", num / 2.54);
        break;
    }
}