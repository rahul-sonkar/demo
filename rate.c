// this is new
#include <stdio.h>
void values();
void main(void)
{
<<<<<<< HEAD
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
=======
    int flag = 0;

    do
    {
        values();
        printf("'1' to continueeee..:  ");
        scanf("%d", &flag);
        printf("------------------------\n\n");
    } while (flag == 1);
}

void values()
{

    double num, rate = 0;
    int gst;
    printf("\nenter rate : ");
    scanf("%lf", &num);
    printf("enter gst %%: ");
    scanf("%d", &gst);
    while (1)
    {
        if (rate + (rate * (gst / 100.0)) >= num)
        {
            printf("value is %.2lf\ngst is %.2lf\n", rate, rate * (gst / 100.0));
            return;
>>>>>>> e8da10aae2926b8eaba0315663a87c3e62d5c03f
        }
        rate++;
    }
}