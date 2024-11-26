#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("How many numbers: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Number must be stricly positive !\n");
    } while (n <= 0);

    int min;
    int max;

    for (int i = 0; i < n; i++)
    {
        int x;

        scanf("%d", &x);

        if (i == 0)
        {
            min = x;
            max = x;
        }

        if (x > max)
            max = x;

        if (x < min)
            min = x;
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}