#include <stdio.h>
#include <math.h>
int decimalToBinary(int);
int reverse(int);
int main(void)
{
    int number;
    printf("enter number\n");
    scanf("%d", &number);
    printf("%d\n", decimalToBinary(number));
    return 0;
}

int decimalToBinary(int num)
{
    int reminder = 0, ans;
    do
    {
        reminder = reminder * 10 + num % 2;
        num = num / 2;

    } while (num > 0);
    ans = reverse(reminder);
    return ans;
}

int reverse(int num)
{
    int a = 0;
    do
    {
        a = a * 10 + num % 10;
        num = num / 10;
    } while (num > 0);
    return a;
}