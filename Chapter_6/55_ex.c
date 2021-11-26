#include <stdio.h>
int isLeap(int);
int main(void)
{
    int input;
    printf("enter number : ");
    scanf("%d", &input);
    printf("%d\n", isLeap(input));
    return 0;
}

int isLeap(int a)
{
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        return 1;
    return 0;
}