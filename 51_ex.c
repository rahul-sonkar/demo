#include <stdio.h>
int isAlphanumeric(char);
int main(void)
{
    char input;
    printf("enter character : ");
    scanf("%c", &input);
    printf("%d\n", input);
    if (isAlphanumeric(input))
        printf("this is alphanumeric\n");
    else
        printf("this is not alphanumeric\n");
    return 0;
}

int isAlphanumeric(char a)
{
    if ((48 <= a && a <= 57) || (65 <= a && a <= 90) || (97 <= a && a <= 122))
    {
        return 1;
    }
    return 0;
}