#include <stdio.h>

int main()
{
    int a;
    int b;

    do
    {
        printf("Give a stricly positive number a: ");
        scanf("%d", &a);

        if (a <= 0)
            printf("The number must be stricly positive !\n");
    } while (a <= 0);

    do
    {
        printf("Give a stricly positive number b: ");
        scanf("%d", &b);

        if (b <= 0)
            printf("The number must be stricly positive !\n");
    } while (b <= 0);

    int r = 0;

    for (int i = 0; i < b; i++)
        r += a;

    printf("%d * %d = %d", a, b, r);
}