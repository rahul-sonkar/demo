// this is new
#include <stdio.h>
void main(void)
{
    double number, gst = 0, value = 0;
    printf("enter rate : ");
    scanf("%lf", &number);
    while (1)
    {
        if (value + (value * 0.12) >= number)
        {
            printf("value is %.2lf\ngst is %.2lf\n", value, value * 0.12);
            break;
        }
        value++;
    }
}