#include <stdio.h>
int isLeap(int);
int isValid(int, int, int);
int main(void)
{
    int day, month, year;
    printf("enter date is dd/mm/yy format : ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (isValid(day, month, year))
        printf("Date is valid \n");
    else
        printf("Date is not valid\n");
    return 0;
}

int isLeap(int a)
{
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        return 1;
    return 0;
}

int isValid(int d, int m, int y)
{
    int True = 0;
    if (m == 2 && isLeap(y) && d >= 1 && d <= 29)
    {
        return 1;
    }
    if (m == 2 && !isLeap(y) && d >= 1 && d <= 28)
        return 1;

    if (m == 4 || m == 6 || m == 9 || m == 11 && d >= 1 && d <= 30)
    {
        return 1;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 && 1 <= d && d <= 31)
    {
        return 1;
    }
    return 0;
}