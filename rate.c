// this is new
#include <stdio.h>
void values();
void main(void)
{
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
        }
        rate++;
    }
}