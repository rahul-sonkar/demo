// new updates v5.434
#include <stdio.h>
int main(void)
{
    int a, b, power = 1;
    printf("enter number : ");
    scanf("%d.%d", &a, &b);
    for (int i = 0; i < b; i++)
    {
        power = power * a;
    }
    printf("entered number is %d.%d and result is %d\n", a, b, power);
    return 0;
}