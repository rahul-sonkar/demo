// this is new
#include <stdio.h>
void main(void)
{
    double number, value = 0;
    int gst;
    printf("enter rate : \n");
    scanf("%lf", &number);
    printf("enter gst %%\n");
    scanf("%d", &gst);
    for (;;)
    {
        switch (gst)
        {
        case '5':
            if (value + (value * 0.05) >= number)
            {
                printf("value is %.2lf\ngst is %.2lf\n", value, value * 0.05);
            }
            break;

        case 12:
            if (value + (value * 0.12) >= number)
            {
                printf("value is %.2lf\ngst is %.2lf\n", value, value * 0.12);
            }
            break;

        case 18:
            if (value + (value * 0.18) >= number)
            {
                printf("value is %.2lf\ngst is %.2lf\n", value, value * 0.18);
            }
            break;

        case 28:
            if (value + (value * 0.28) >= number)
            {
                printf("value is %.2lf\ngst is %.2lf\n", value, value * 0.28);
            }
            break;
        }
        value++;
    }
}