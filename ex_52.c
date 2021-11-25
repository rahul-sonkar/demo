#include <stdio.h>
int charac(char);
int main(void)
{
    char cha;
    printf("enter a character : ");
    scanf("%c", &cha);
    printf("Ans --> %c\n", charac(cha));
    return 0;
}

int charac(char a)
{
    if (97 <= a && a <= 122)
    {
        return a - 32;
    }
    return a;
}