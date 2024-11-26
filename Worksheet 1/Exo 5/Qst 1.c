#include <stdio.h>

int main()
{
    float x;
    int n;

    do
    {
        printf("Give a strictly positive real number: ");
        scanf("%f", &x);

        if (x <= 0)
            printf("The real number must be stricly positive !\n");
    } while (x <= 0);

    do
    {
        printf("Give a positive power: ");
        scanf("%d", &n);

        if (n < 0)
            printf("The power must be positive !\n");
    } while (n < 0);

    float r = 1;

    for (int i = 0; i < n; i++)
        r *= x;

    printf("%.2f^%d = %.2f", x, n, r);
}
